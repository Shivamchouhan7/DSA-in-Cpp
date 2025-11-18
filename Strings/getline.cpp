#include <iostream>
#include <string>
using namespace std;

int main() {
    char str[100];
    cout << "Enter Char array : ";

    // cin >> str;  // Takes input only until first whitespace (NOT full line)

    // To read a full line including spaces:
    // Syntax: cin.getline(charArray, size, delimiter);
    // If delimiter is not provided, default is '\n'
    cin.getline(str, 100);  // reads full line until ENTER key

    cout << str << endl;    



    char str2[100];
    cout << "Enter another string : ";

    // This getline uses '$' as delimiter.
    // Input will terminate when user types '$'
    // Everything after '$' will be ignored and not stored.
    cin.getline(str2, 100, '$');

    cout << str2;

    return 0;
}
