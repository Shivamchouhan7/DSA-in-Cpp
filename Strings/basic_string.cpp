#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    // cout << "Enter string: ";
    // cin >> str;                     // Stops at whitespace
    // cout << str << endl;

    // so for full line we use getline(cin,string_name)
    cout << "Enter full line: ";
    getline(cin, str);       // Reads the entire line including spaces      
    cout << "You entered: " << str;

    return 0;
}
