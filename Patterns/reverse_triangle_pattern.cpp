#include <iostream>
using namespace std;
/*reverse triangle pattern like
1
2 1
3 2 1
4 3 2 1 
*/

int main(){
    int n;
    cout<<"Enter no. of rows for triangle pattern : ";//enter 4 for above example pattern 
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}