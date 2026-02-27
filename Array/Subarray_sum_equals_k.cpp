#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
 
// function to return the count of subarrays whose sum equals to k 

int subArraysum(vector <int> &v , int k){
    int count=0;
    int n =v.size();
    vector<int>prefixSum(n,0); // to store prefix sum 
prefixSum[0]=v[0];
    for(int i=1;i<n;i++){
    prefixSum[i]=v[i]+prefixSum[i-1];
    }

    // To count freq of prefix sum 
    unordered_map<int, int > m;
    for(int j=0;j<n;j++){
        if(prefixSum[j]==k) count++;
        int val = prefixSum[j]-k;
        if(m.find(val)!= m.end()){
            count+=m[val];
        }
        m[prefixSum[j]]++;

    }
    return count;

}

int main(){
    int n,k;
    cout<<"Enter size of array/vector :";
    cin>>n;
    cout<<"Enter elements :\n";
    vector<int> v(n);
    for(int &x:v){
        cin>>x;
    }
    cout<<"Enter value of k : ";
    cin>>k;
    cout<<"The count is "<<subArraysum(v,k);
    return 0;
}