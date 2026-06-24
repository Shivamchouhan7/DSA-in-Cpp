#include <iostream>
#include <vector>
using namespace std;

int counti(vector<int>& arr,int st,int end){
    int mid=st+(end-st)/2;
    int i=st,j=mid+1;
    int invCount=0;
    vector <int> temp; 
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);   
            invCount+=(mid-i+1);
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
    return invCount;
}
int countInversion(vector<int>& arr,int st,int end){
    if(st>=end){
        return 0;
    }
        int mid=st+(end-st)/2;
        int leftCount=countInversion(arr,st,mid);
        int rightCount=countInversion(arr,mid+1,end);
        int invCount=counti(arr,st,end);
        return leftCount+rightCount+invCount;
    
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    int ans=countInversion(arr,0,n-1);
    cout<<"The number of inversions in the array is: "<<ans<<endl;
    return 0;
}