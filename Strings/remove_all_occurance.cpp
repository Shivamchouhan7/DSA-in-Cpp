#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to remove all occurrences of a substring "part" from string "s"
string remove_all_occurance(string s,string part){
    while(s.length()>0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());

        // erase() removes characters from the string
        // find() is used to search a substring inside a string
    }
    return s;
}

int main(){
    string str,part;
    cout<<"enter your string :";
    getline(cin,str);
    cout<<"enter string part : ";
    getline(cin,part);
    str=remove_all_occurance(str,part);
    cout<<str;
    return 0;
}