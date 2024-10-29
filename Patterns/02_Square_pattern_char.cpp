#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the size of square pattern : ";
    cin>>num;
    
    for(int i=0;i<num;i++){
        char ch='A';
        for(int j=0;j<num;j++){
            cout<<ch<<" ";
            ch++;//increament of ASCII value
        }
        cout<<endl;
    }
    return 0;
}