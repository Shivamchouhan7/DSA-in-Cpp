#include <iostream>
using namespace std;
/*FLOYD'S TRIANGLE PATTERN
like
1
2 3
4 5 6
7 8 9 10
*/
int main()
{
    int n,num=1;
    cout << "Enter size (line) for triangle pattern : "; // enter 4 for above example pattern
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <i+1 ; j++)
        {
            cout << num << " ";//prints num with one space 
            num++;
        }
        cout << endl;
    }

    return 0;
}