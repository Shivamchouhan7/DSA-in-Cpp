#include <iostream>
using namespace std;
/*Hollow diamond pattern like :-
   *
  * *
 *   *
*     *
 *   *
  * *
   *
Hint:- divide it in two parts like 
   *
  * *
 *   *
*     *
-----------
 *   *
  * *
   *
 */
int main()
{
    int n = 4;
    //For Top Part
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        {
            for (int k = 0; k < 2 * i - 1; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    // For Bottom Part
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }cout<<"*";
        if(i!=n-2){
            for (int k = 0; k < 2*(n-i) - 5 ; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
        
    }

    return 0;
}