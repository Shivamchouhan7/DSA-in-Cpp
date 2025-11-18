#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Shivam Chouhan";  // String is dynamic in nature but character array does not 
    cout << str << endl;

    str = "hello";   // Changing the entire string dynamically
    cout << str<<endl;

    string str2=" Brother";
    cout<<(str<str2)<<endl; //lexicographically comparison
    cout<<(str+str2)<<endl; //concatination
    return 0;
}