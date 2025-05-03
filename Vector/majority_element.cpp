#include <iostream>
#include <vector>
using namespace std;

// Brute force approach for searching majority element in vector/array
// complexity: O(n^2)
int main(){
    int n;
    cout<<"enter the size of vector:";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter the elements :\n";
    for(int &ele:vec){
        cin>>ele;
    }
    
    for(int i=0;i<n;i++){
        int freq=0;
        for(int j=0;j<n;j++){
            if(vec[j]==vec[i]){
                freq++;
            }
        }
        if(freq>n/2){
            cout<<"Majority element is : "<<vec[i];
            return 0;
        }
    }
    
    return 0;
}