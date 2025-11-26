#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string reverse_string_word(string str){
    string ans="";
    // Reverse full string 
    reverse(str.begin(),str.end());

// Reverse each words 
    for(int i=0;i<str.length();i++){
        string word="";
        while(i<str.length() && str[i]!=' '){
            word+=str[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0){
            if(ans.length()>0) ans+=" ";
            ans+=word;
        }
    }
    return ans;
    
}

int main(){
    string str;
    cout << "enter string : ";
    getline(cin, str);
    cout<<"reversed string is : "<<reverse_string_word(str);
    return 0;
}