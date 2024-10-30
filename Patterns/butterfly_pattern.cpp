#include <iostream>
using namespace std;
/* Butterfly Pattern like 
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

Hint :-Divide it in two parts

*      *
**    **
***  ***
********
-----------
********
***  ***
**    **
*      *
 */
int main(){
    int n=4;
    //for Top Part
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int k=0;k<6-(2*i);k++){
            cout<<" ";
        }
        for(int l=0;l<i+1;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    //For Bttom Part
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int k=0;k<2*i;k++){
            cout<<" ";
        }
        for(int l=0;l<n-i;l++){
            cout<<"*";
        }
        cout<<endl;
    }    
    
    return 0;
}