#include <iostream>
using namespace std;

// we have to compress the string and return its length 
int compression(string s){
    string ans="";
    int i=0;
    
    while(i<s.length()){

        char ch=s[i];
        int count=0;

        while(i<s.length() && s[i] == ch){
            count++;
            i++;
        }

        ans+=ch;

        if(count>1){
            ans+=to_string(count);
        }

    }
    return ans.length();
}

int main(){
    string str;
    cout << "enter string : ";
    getline(cin, str);

    cout<<"length of compressed string is : "<<compression(str);
    return 0;
}