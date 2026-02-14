#include <iostream>
#include <vector>
using namespace std;

//Findind Duplicate element with slow and fast pointer approach of Linked list

//Floyd’s Cycle Detection (Tortoise & Hare) -->  O(n) time and  O(1) space Complexity

/*
Problem:
Given an array of size n+1 containing numbers from 1 to n,
there is exactly one duplicate number.
Find the duplicate without modifying the array
and using only constant extra space.

Approach:
Use Floyd’s Cycle Detection Algorithm (Tortoise and Hare).
*/

int Duplicate(vector<int>& arr ){
    int slow = arr[0], fast =arr [0];
    do{
        slow = arr[slow]; // +1
        fast = arr[arr[fast]]; // +2
    } while(slow != fast);
    slow = arr[0]; //Reinitialize it 
    while(slow != fast){
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
}
int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter elements : -"<<endl;
    for(int &x:v){
        cin>>x;
    }
    cout<<"Duplicate value is "<<Duplicate(v);
    return 0;
}