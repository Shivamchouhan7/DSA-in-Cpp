#include <iostream>
using namespace std;
int decimal_to_binary(int d)
{
    int ans = 0;
    int power = 1;
    while (d > 0)
    {
        int reminder = d % 2;
        d = d / 2;
        ans += (reminder * power);
        power *= 10;
    }
    return ans; // Binary form 
}
int main()
{
    int deci_num;
    cout << "Enter the  Decimal number :";
    cin >> deci_num;
    cout << "The binary of decimal number " << deci_num << " is " << decimal_to_binary(deci_num) << endl;
    return 0;
}