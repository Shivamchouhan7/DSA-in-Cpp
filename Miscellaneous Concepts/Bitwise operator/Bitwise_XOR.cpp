#include <iostream>
using namespace std;

// Bitwise XOR operator --->>>   ^
/*for bit 0 0 it gives 0
  for bit 1 1 it gives 0
  for bit 1 0 and for 0 1 it gives 1 as an output  

 for example :- In binary 8 and 4 can be writen as
 8--->>   1000
 4--->>   0100
 ------------------
 it gives 1100 which is  12
  */
int main()
{
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;

    int result = a ^ b; // using bitwise XOR Operator ^

    cout << "Bitwise XOR of " << a << " and " << b << " is " << result << endl;

    return 0;
}
