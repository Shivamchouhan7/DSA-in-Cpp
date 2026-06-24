#include <iostream>
#include <vector>
using namespace std;
class MergeSort{
    public:
    void merge(vector<int>& arr,int st,int end){
        int mid=st+(end-st)/2;
        int i=st,j=mid+1;
        vector <int> temp;
        while(i<=mid && j<=end){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i++]);
            }
            else{
                temp.push_back(arr[j++]);
            }
        }
        while(i<=mid){
            temp.push_back(arr[i++]);
        }
        while(j<=end){
            temp.push_back(arr[j++]);
        }
        for(int i=0;i<temp.size();i++){
            arr[i+st]=temp[i];
        }
        
    }
    void mergeSort(vector<int>& arr,int st,int end){
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
    vector<int> arr(n);
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