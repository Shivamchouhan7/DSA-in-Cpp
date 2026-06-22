#include <iostream>
using namespace std;
class MergeSort{
    public:
    void merge(int arr[],int st,int end){
        int mid=st+(end-st)/2;
        int i=st,j=mid+1,k=0;
        int temp[end-st+1]; 
        while(i<=mid && j<=end){
            if(arr[i]<arr[j]){
                temp[k++]=arr[i++];
            }
            else{
                temp[k++]=arr[j++];
            }
        }
        while(i<=mid){
            temp[k++]=arr[i++];
        }
        while(j<=end){
            temp[k++]=arr[j++];
        }
        for(int i=st;i<=end;i++){
            arr[i]=temp[i-st];
        }
        
    }
    void mergeSort(int arr[],int st,int end){
        if(st>=end){
            return;
        }
        int mid=st+(end-st)/2;
        mergeSort(arr,st,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,st,end);
    }
};

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n; 
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MergeSort ms;
    ms.mergeSort(arr,0,n-1);
    cout<<"The sorted array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}