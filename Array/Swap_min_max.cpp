#include <iostream>
#include <climits>
using namespace std;
/* Swaping min and max element of array */
void swap(int* max,int* min){
    *max=*max+*min;
    *min=*max-*min;
    *max=*max-*min;
    cout<<"Swaping is completed\n";
    
}
int main(){
    // example of 10 elements
    int max=INT_MIN,min=INT_MAX;
    int maxidx=-1, minidx=-1;//maxidx means maximum index and minidx means minimum index
    int arr[10]={5,6,88,9,44,58,78,98,52,10};
    cout<<"Original Array "<<endl;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(int i=0;i<10;i++){
        if(max<arr[i]){
            max=arr[i];
            maxidx=i;
        }
        if(min>arr[i]){
            min=arr[i];
            minidx=i;
        }
    }
    cout<<"Max="<<max<<endl;
    cout<<"Min="<<min<<endl;
    swap(&arr[maxidx],&arr[minidx]);
    cout<<"Array After swaping "<<endl;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    /*after swaping 5 and 98 are swaped*/
    return 0;
}