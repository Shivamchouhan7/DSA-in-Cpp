#include <iostream>
using namespace std;
/*Inverted Triangle pattern like
1111
 222
  33 
   4
      */
int main(){
    int n;
    cout << "Enter size (line) for triangle pattern : ";//enter 4 for above example triangle 
    cin>>n;
    for (int i = 0; i < n; i++)
    {for(int j=0;j<i;j++){
        cout<<" ";
    }
    for(int k=0;k<n-i;k++){
        cout<<i+1;
    }
    cout<<endl;
        
    }
    

    return 0;
}