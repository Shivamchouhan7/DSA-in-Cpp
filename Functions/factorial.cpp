#include <iostream>
using namespace std;
// factorial function
int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    cout<<factorial(5);
    
    
    return 0;
}