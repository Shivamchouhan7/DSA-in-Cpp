#include <iostream>
#include <vector>
using namespace std;

void getPermutation(string &str,int idx){
    int n=str.size();
    if(idx==n){
        for(int i=0;i<n;i++){
            cout<<str[i]<<" ";
        }
        cout<<endl;
        return;
        
    }
    for(int i=idx;i<n;i++){
        swap(str[idx],str[i]);
        getPermutation(str,idx+1);

        swap(str[idx],str[i]);

    }
}
int main(){
    string str;
    cout << "Enter String : "<<endl;
    cin>>str;

    cout<<"permutations are :-"<<endl;
    getPermutation(str,0);
    return 0;
}