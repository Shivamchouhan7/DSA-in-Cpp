#include <iostream>
#include <vector>
using namespace std;

//Brute-Force :- product of array except self (without using division operator)

void POA(vector<int> &vec){
    vector<int> temp=vec;
    for(int i=0;i<vec.size();i++){
        int product=1;
        for(int j=0;j<vec.size();j++){
            if(i!=j){
                product*=temp[j];
            }
        }
        vec[i]=product;
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