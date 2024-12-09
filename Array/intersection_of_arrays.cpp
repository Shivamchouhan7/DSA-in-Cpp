#include <iostream>
using namespace std;

// To find intersection of two arrays(common elements )
void intersection(int arr1[],int arr2[],int s1,int s2){
    cout<<"Printing intersection of two arrays(common elements): "<<endl;
    for(int i=0;i<s1;i++){
        int count=0;
        for(int j=0;j<s2;j++){
            if(arr1[i]==arr2[j]){
                count++;
            }
        }
        if(count!=0){
            cout<<arr1[i]<<" ";
        }
    }
}
int main(){
    int n1,n2;
    cout<<"Enter the size of 1st array :";
    cin>>n1;
    cout<<"Enter the size of 2nd array :";
    cin>>n2;
    int arr1[n1];
    int arr2[n2];
    cout<<"Enter the elements of 1st array:-"<<endl;
    for(int &element:arr1){
        cin>>element;
    }
    cout<<"Enter the elements of 2nd array:-"<<endl;
    for(int &element:arr2){
        cin>>element;
    }
    intersection(arr1,arr2,n1,n2);
    
    return 0;
}