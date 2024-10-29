#include <iostream>
using namespace std;
// pattern of character like 
/* example :- 
A B C
D E F
G H I*/
int main(){
    int num;
    char ch='A';
    cout<<"Enter the size of square pattern : ";//Enter 3 for above pattern example
    cin>>num;
    
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cout<<ch<<" ";
            ch++;//increament of ASCII value
        }
        cout<<endl;
    }
    return 0;
}