#include <iostream>
using namespace std; 

//Euclid's method to find Greatest Common Divisor / HCF

// Iterative method
int Iterative_GCD(int a, int b) {
    while (a != 0 && b != 0) {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    return (a == 0) ? b : a;
}

// Recursive Method
int Recursive_GCD(int a, int b) {
    if (b == 0)
        return a;
    return Recursive_GCD(b, a % b);
}
int main(){
    int x,y;
    cout<<"Enter two numbers :-\n";
    cin>>x>>y;
    cout<<"By Iterative Method GCD = "<<Iterative_GCD(x,y)<<endl;
    cout<<"By Recursive Method GCD = "<<Recursive_GCD(x,y)<<endl;
    return 0;
}