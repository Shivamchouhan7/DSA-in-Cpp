#include <iostream>
using namespace std;

// Bitwise << (left shift) operator "<<"
/* Let say for  any number n
if we write n << i (it can also be seen as [n multiplied by 2 to the power i])
means n shifted towards left i times 
For Example :-
let say 4 << 1
means 100 and after shifting it becomes 1000 means 8  */
int main()
{
    int a, i;
    cout << "Enter  number: ";
    cin >> a;
    cout << "Enter number of shifts : ";
    cin >> i;

    int result = a<<i; // using bitwise << (left shift )Operator 

    cout << i << " times  left shift of " << a  << " is " << result << endl;
    cout<<"It can be seen as "<<a<< " << "<< i;

    return 0;
}
