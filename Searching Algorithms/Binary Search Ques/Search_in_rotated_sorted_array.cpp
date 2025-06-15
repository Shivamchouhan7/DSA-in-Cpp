/*Problem Name: Search in Rotated Sorted Array
LeetCode Link: https://leetcode.com/problems/search-in-rotated-sorted-array/
Difficulty: Medium
Tags: Binary Search, Array*/

/* Problem Statement:
You are given an array nums which is sorted in ascending order, but then rotated at some pivot unknown to you beforehand.
(For example: [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2])

You are also given a target value. If found in the array, return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.*/


#include <iostream>
#include <vector>
using namespace std;

// Function to search the target in rotated sorted array
int search(vector<int>& A,int target){
    int st=0,end=A.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;


        if(A[mid]==target){
            return mid;
        }


        if(A[st]<=A[mid]){//left part is sorted 
            if(A[st]<=target && target <=A[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{//Right Part is sorted
            if(A[mid]<=target && target<=A[end]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;

}

int main(){
    int n,target; //size and target
    cout<<"Enter size:";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter elements :-\n";
    for(int &e:vec){
        cin>>e;
    }
    cout<<"Enter target value :-";
    cin>>target;
    int result=search(vec,target);
    if(result==-1){
        cout<<"Element not found ";
        
    }
    else{
        cout<<"Element found at index "<<result<<endl;
    }

    
    return 0;
}