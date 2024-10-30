#include <iostream>
using namespace std;
/*Pyramid pattern like :-
   1
  121
 12321
1234321
      */
int main(){
    int n;
    cout << "Enter size (line) for Pyramid pattern : ";//enter 4 for above example triangle 
    cin>>n;
    for (int i = 0; i < n; i++)
    {for(int j=1;j<n-i-1;j++){
        cout<<" ";
    }
    for(int k=1;k<=i+1;k++){
        cout<<k;
    }
    for(int l=i;l>=1;l--){
        cout<<l;
    }
    cout<<endl;
        
    }
    

    return 0;
}