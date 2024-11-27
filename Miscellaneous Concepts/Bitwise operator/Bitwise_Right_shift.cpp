#include <iostream>
using namespace std;

// Bitwise Right shift operator ">>"
/* Let say for  any number n
if we write n >> i (it can also be seen as [n devided by 2 to the power i])
means n shifted towards Right i times 
For Example :-
let say 4 >> 1
means [100] and after shifting it becomes [10] means 2
extra bit comes outside as we don't have any space at right side   */
int main()
{
    int a, i;
    cout << "Enter  number: ";
    cin >> a;
    cout << "Enter number of shifts : ";
    cin >> i;

    int result = a>>i; // using bitwise >> (Right shift ) Operator 

    cout << i << " times  Right shift of " << a  << " is " << result << endl;
    cout<<"It can be seen as "<<a<< " >> "<< i;

    return 0;
}
