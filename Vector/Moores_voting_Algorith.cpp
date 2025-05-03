#include <iostream>
#include <vector>
using namespace std;

// Moor's Algorithm for searching majority element in vector/array
// complexity: O(n)
int main(){
    int n;
    cout<<"enter the size of vector:";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter the elements :\n";
    for(int &ele:vec){
        cin>>ele;
    }
    int freq=0,ans=0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=vec[i];
        }
        if(ans==vec[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<"Majority element is :"<<ans;
    return 0;
}