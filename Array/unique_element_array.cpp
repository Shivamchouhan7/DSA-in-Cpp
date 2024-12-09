#include <iostream>
using namespace std;
// print all unique values of array
void unique(int arr[],int size){
    int count;
    cout<<"Unique elements of array are :"<<endl;
    for(int i=0;i<size;i++){
        count=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            
        }
        if(count==0){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:-"<<endl;
    for(int &element:arr){
        cin>>element;
    }
    unique(arr,n);
    return 0;
}