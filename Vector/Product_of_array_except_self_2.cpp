#include <iostream>
#include <vector>
using namespace std;

//Optimal Approach:- product of array except self (without using division operator)
// Time complexity - O(n) & Space complexity O(n)
void POA(vector<int> &vec){
    int n=vec.size();
    vector<int> prefix(n);
    vector<int> suffix(n);
    prefix[0]=1;
    suffix[n-1]=1;

    //prefix calculation
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]*vec[i-1];
    }

    //Suffix calculation
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]*vec[i+1];
    }
    for(int i=0;i<n;i++){
        vec[i]=prefix[i]*suffix[i];
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