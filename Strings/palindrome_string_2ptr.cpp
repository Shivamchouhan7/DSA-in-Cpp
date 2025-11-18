#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool palindrome_string(string str){
    int left=0,right=str.length()-1;
    while(left<right){
        if(str[left]!=str[right]){
        return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main(){
    string str;
    cout<<"Enter a string :";
    getline(cin,str);
    cout<<"original string "<<str<<endl;
    if(palindrome_string(str)){
        cout<<"String is palindrome "<<endl;
    }
    else{
        cout<<"String is not palindrome "<<endl;
    }
    return 0;
}