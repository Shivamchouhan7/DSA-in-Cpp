#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Two sum problem optimized approach using hashing 

vector<int> TwoSum(vector<int>& v,int target){
    unordered_map<int,int> m;
    vector<int> result;
    for(int i=0;i<v.size();i++){
        int first=v[i];
        int sec=target-first;
        if(m.find(sec)!=m.end()){
            result.push_back(i);
            result.push_back(m[sec]);
            break;
        }
        m[first]=i;
    }
    return result;
}
int main(){
    int n,target;
    cout<<"enter vector size :-"<<endl;
    cin>>n;
    vector<int> v(n);
    cout<<"enter vector element :- "<<endl;
    for(int &x:v){
        cin>>x;
    }
    cout<<"Enter target value :- "<<endl;
    cin>>target;

    vector<int> r = TwoSum(v, target);

    if(r.empty()) {
        cout << "No pair found";
    } else {
        cout << "Pair indices: " << r[0] << " " << r[1];
    }
    return 0;
}