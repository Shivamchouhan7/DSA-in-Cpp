#include <iostream>
#include <vector>
using namespace std;
 
//Function to print all subset of an array

void printsubset(vector<int>& v,vector<int>& ans,int i){
    if(i==v.size()){
        for(int var:ans){
            cout<<var<<" ";
        }
        cout<<endl;
        return ;
    }

    //Inclusion
    ans.push_back(v[i]);
    printsubset(v,ans,i+1);

    ans.pop_back(); //Backtracking step
    //Exclusion
    printsubset(v,ans,i+1);


}
int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> v(n);
    vector<int> ans;

    cout << "Enter elements: "<<endl;
    for(int &x:v) {
        cin>>x;
    }
    cout<<"Subsets are :-"<<endl;
    printsubset(v,ans,0);
    
    return 0;
}