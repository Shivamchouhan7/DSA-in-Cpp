#include <iostream>
using namespace std;
/*reverse triangle pattern of character like :-
A
B A
C B A
D C B A 
*/

int main(){
    int n;
    char ch='A';
    cout<<"Enter no. of rows for triangle pattern : ";//enter 4 for above example pattern 
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<ch<<" ";
            ch--;
        }
        ch+=(i+2);
        cout<<endl;
    }
    return 0;
}