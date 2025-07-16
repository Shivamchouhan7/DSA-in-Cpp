/*Problem Name : Aggressive cow problem 
Difficulty: Medium
Tags: Binary Search, Greedy, Search on Answer*/

/*Given N stalls and C cows, place the cows in the stalls such that the minimum distance between any two cows is as large as possible. 
You need to find and return this maximum of the minimum distances.*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

bool ispossible(int mid,vector<int> & arr,int c,int n){//O(n)
    // here mid= minimum allowed distance 
    int cows=1;
    int lastStallPos=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-lastStallPos >= mid){
            cows++;
            lastStallPos=arr[i];
        }
        if(cows==c) return true;
    }
    return false;

}

int getdistance(vector<int>& arr,int C,int N){
    // st=1, end =ARRmaxvalue-Arrminvalue
    sort(arr.begin(),arr.end());//O(N logN)
    

    int st=1,end =arr[N-1]-arr[1];
    int ans=-1;
    while(st<=end){//O(log(range) * n)
        int mid=st+(end-st)/2;
        if(ispossible(mid,arr,C,N)){
            ans =mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int n,c; //size and cow
    cout<<"Enter size:";
    cin>>n;
    cout<<"Enter no. of cows:";
    cin>>c;
    vector<int> vec(n);
    cout<<"Enter stalls position :-\n";
    for(int &e:vec){
        cin>>e;
    }
    cout<<"maximum of minimum distance is  "<<getdistance( vec,c,n);
    
    return 0;
}