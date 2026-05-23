// Combination Sum
#include <iostream>
#include <vector>
#include <set>
using namespace std;
set<vector<int>> s;
void findallcombination(vector<int> & vec,int i,int tar,vector<vector<int>> &ans,vector<int> &comb ){
    if(tar==0){
        if(s.find(comb)==s.end()){
            s.insert(comb);
            ans.push_back(comb);
        }
        
        return;
    }
    if(i>=vec.size() || tar<0){
        return;
    }
    //pick the element
    comb.push_back(vec[i]);
    findallcombination(vec,i,tar-vec[i],ans,comb);
    findallcombination(vec,i-1,tar-vec[i],ans,comb);
    comb.pop_back(); //backtracking
    //not pick the element
    findallcombination(vec,i+1,tar,ans,comb);
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n; 
    vector<int> vec(n);
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int tar;
    cout<<"Enter the target: ";
    cin>>tar;
    vector<vector<int>> ans;
    vector<int> comb;
    findallcombination(vec,0,tar,ans,comb);
    cout<<"The combinations are: "<<endl;
    for(auto v:ans){
        for(int i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}