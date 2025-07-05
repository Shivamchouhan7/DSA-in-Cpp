/*Problem Name: Painter's Partition Problem
Difficulty: Medium
Tags: Binary Search, Greedy, Arrays, Optimization*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Function to check if painting is possible within MaxAllowedTime using m painters
bool ispossible(vector<int> vec,int n ,int m,int MaxAllowedTime){
    int painter=1,time=0;
    for(int i=0;i<n;i++){
        if(time+vec[i]<=MaxAllowedTime){
            time+=vec[i];
        }
        else{
            painter++;
            time=vec[i];
        }
    }
    return painter <= m;

}

//Function to find min time to paint 
int min_time_to_paint(vector<int> &vec,int n,int m){
    int sum=0,maxval=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=vec[i];
        maxval=max(maxval,vec[i]);
    }
    int st=maxval,end=sum;
    int mid,ans=-1;
    while(st<=end){
        mid=st+(end-st)/2;
        if(ispossible(vec,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    int n,m; //size and painters
    cout<<"Enter size:";
    cin>>n;
    cout<<"Enter no. of painters:";
    cin>>m;
    vector<int> vec(n);
    cout<<"Enter elements :-\n";
    for(int &e:vec){
        cin>>e;
    }
    cout<<"min. time to paint is: "<<min_time_to_paint(vec,n,m);
    return 0;
}