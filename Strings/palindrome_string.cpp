#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string :";
    getline(cin,str);
    cout<<"original string "<<str<<endl;
    
    string str2=str;
    reverse(str2.begin(),str2.end());
    cout<<"reversed string "<<str2<<endl;
    if(str2==str){
        cout<<"String is palindrome"<<endl;
    }
    else cout<<"string is not palindrome !!!"<<endl;
    return 0;
}