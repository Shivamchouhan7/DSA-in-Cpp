#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string :";
    getline(cin,str);
    cout<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<"string after reverse :"<<str<<endl;
    return 0;
}