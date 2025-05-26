#include <iostream>
using namespace std;

// Computing Binary exponentiation ( x^n )  ( POW(X,N) ) using iterative approach!....
 double pow(double x, int n){
    if (n == 0) return 1.0;
    if (x == 0) return 0.0;
    if (x == 1) return 1.0;
    if (x == -1) return (n % 2 == 0) ? 1.0 : -1.0;

    long binform =n;
    if(n<0){
        x=1/x;
        binform = -binform;
    }
    double ans =1.0;
    while(binform>0){
        if(binform%2==1){
            ans*=x;
        }
        x*=x;
        binform/=2;
        
    }
    return ans;
 }

int main(){
    double x;
    int n;
    cout<<"To calculate power of any number :-\n";
    cout << "Enter the base (x): ";
    cin >> x;

    cout << "Enter the exponent (n): ";
    cin >> n;

    double result = pow(x, n);
    cout << x << " raised to the power " << n << " is: " << result << endl;

    return 0;
}