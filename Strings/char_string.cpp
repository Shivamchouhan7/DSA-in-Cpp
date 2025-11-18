#include <iostream>
#include <cstring>
using namespace std;

int main() {

    // Creating a character array manually.
    // We explicitly add '\0' to mark the end of the string.
    char str[] = {'a', 'b', 'c', '\0'};

    // strlen() counts the number of characters until it finds '\0'
    cout << strlen(str) << endl;  // Output: 3


    // When we write a string in double quotes, C++ automatically
    // adds the null terminator '\0' at the end.
    // So "Shivam" internally becomes: {'S','h','i','v','a','m','\0'}
    char str2[] = "Shivam";

    // Accessing str2[6] gives '\0' because index 6 is the null character.
    // This prints nothing (invisible output).
    cout << str2[6];

    return 0;
}
