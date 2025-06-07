#include <iostream>
#include <vector>
using namespace std;

//Optimal Approach:- product of array except self (without using division operator)
// Time complexity - O(n) & Space complexity O(1)

//Here we are reducing space complexity from O(n) to O(1)
void POA(vector<int> &vec){
    int n=vec.size();
    vector<int> ans=vec;

    //prefix calculation
    for(int i=1;i<n;i++){
        vec[i]=vec[i-1]*ans[i-1];
    }

    //Suffix calculation
    int suffix=1;
    for(int i=n-2;i>=0;i--){
        suffix*=ans[i+1];
        vec[i]*=suffix;;
    }
    
}


int main(){
    int n; //size
    cout<<"enter size:";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter the elements:-\n";
    for(int &e:vec){
        cin>>e;
    }
    POA(vec);
    for(int e:vec){
        cout<<e<<" ";
    }
    
    return 0;
}