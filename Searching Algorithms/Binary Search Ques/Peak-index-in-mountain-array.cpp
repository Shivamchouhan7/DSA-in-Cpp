/*Problem Name: peak-index-in-a-mountain-array
Difficulty: Medium
Tags: Binary Search, Array*/

#include <iostream>
#include <vector>
using namespace std;

//Function to find peak index in a mountain array
int peak(vector<int>& v){
    int st=1,end=v.size()-2;// edge case : In a mountain array, the peak is always somewhere between the first and last element.
    while(st<=end){
        int mid=st+(end-st)/2;
        if(v[mid-1]<v[mid] && v[mid]>v[mid+1]){
            return mid;//index of peak element
        }
        if(v[mid-1] <v[mid]){//Search in Right 
            st=mid+1;
        }
        else{//Search in Left 
            end=mid-1;
        }
    }
    return -1;

}

int main(){ 
    int n; //size
    cout<<"Enter size:";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter elements :-\n";
    for(int &e:vec){
        cin>>e;
    }
    int peakindex=peak(vec);
    if(peakindex==-1){
        cout<<"Peak element not found\n";
    }
    else{
        cout<<"Peak Element is found at index "<<peakindex;
    }

    
    return 0;
}