#include <iostream>
using namespace std;
/*Inverted Triangle pattern like
AAAA
 BBB
  CC
   D
 */
int main()
{
    int n;
    char ch = 'A';
    cout << "Enter size (line) for triangle pattern : "; // enter 4 for above example triangle
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < n - i; k++)
        {
            cout << ch;
        }
        ch++;

        cout << endl;
    }

    return 0;
}