#include <iostream>
#include <vector>
using namespace std;

void getPermutation(vector<int> &num,int idx,vector<vector<int>>& ans){
    int n=num.size();
    if(idx==n){
        ans.push_back(num);
        return ;
        
    }
    for(int i=idx;i<n;i++){
        swap(num[idx],num[i]);
        getPermutation(num,idx+1,ans);

        swap(num[idx],num[i]);

    }
}
int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> v(n);
    vector<vector<int>> ans;

    cout << "Enter elements: "<<endl;
    for(int &x:v) {
        cin>>x;
    }
    cout<<"permutations are :-"<<endl;
    getPermutation(v,0,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){

            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}