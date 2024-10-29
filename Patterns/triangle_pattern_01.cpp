#include <iostream>
using namespace std;
// triangle pattern like 
/*
*
* *
* * *
* * * *
*/

int main(){
    int num;
    cout<<"Enter the size of triangle pattern : ";//Enter 4 for above example pattern 
    cin>>num;
    
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";//prints * with one space 
        }
        cout<<endl;// move to next line after each row
    }
    return 0;
}