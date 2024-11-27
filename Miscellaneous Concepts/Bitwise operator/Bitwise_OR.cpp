#include <iostream>
using namespace std;

// Bitwise OR operator --->>>   &
int main() {
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;

    int result = a | b; // using bitwise operator |

    cout << "Bitwise OR of " << a << " and " << b << " is " << result << endl;

    return 0;
}
