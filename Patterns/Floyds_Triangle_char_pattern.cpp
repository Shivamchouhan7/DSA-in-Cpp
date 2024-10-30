#include <iostream>
using namespace std;
/*FLOYD'S TRIANGLE PATTERN
like :-
A
B C
D E F
G H I J*/

int main(){
    int n;
    char ch='A';
    cout << "Enter size (line) for triangle pattern : "; // enter 4 for above example pattern
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <i+1 ; j++)
        {
            cout << ch << " ";//prints ch with one space 
            ch++;
        }
        cout << endl;
    }
    return 0;
}