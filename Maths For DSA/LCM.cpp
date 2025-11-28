#include <iostream>
using namespace std;

//GCD
int Recursive_GCD(int a, int b) {
    if (b == 0)
        return a;
    return Recursive_GCD(b, a % b);
}

//LCM
int LCM(int x,int y){
    int gcd=Recursive_GCD(x,y);
    return (x*y)/gcd;
}

int main(){
    int x,y;
    cout<<"Enter two numbers :-\n";
    cin>>x>>y;
    cout<<"LCM = "<<LCM(x,y)<<endl;
    return 0;
}