#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Optimized approach for searching majority element in vector/array
// complexity: O(n log n)
int main(){
    int n;
    cout<<"enter the size of vector:";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter the elements :\n";
    for(int &ele:vec){
        cin>>ele;
    }
    sort(vec.begin(),vec.end()); // sort the vector
    int freq=1,ans=vec[0];
    for(int i=1;i<n;i++){
        if(vec[i]==vec[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=vec[i];
        }
        if(freq>n/2){
            cout<<"Majority element is :"<<vec[i];
            return 0;
        }

    }
    return 0;
}