#include <iostream>
using namespace std;
// triangle pattern like 
/*
A
B B
C C C
D D D D
*/

int main(){
    int num;
    char ch='A';
    cout<<"Enter the size of triangle pattern : ";//Enter 4 for above example pattern 
    cin>>num;
    
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";//prints character with one space 
        }
        ch++;//move to the next character
        cout<<endl;// move to next line after each row
    }
    return 0;
}