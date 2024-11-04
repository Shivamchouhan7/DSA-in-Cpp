#include <iostream>
using namespace std;
// Program for calculating nCr

int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int nCr(int n , int r){
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);
    int nCr=fact_n/(fact_r*fact_nmr);
    return nCr;

}

int main(){
    int n,r;
    cout<<"Enter n for nCr calculation :";
    cin>>n;
    cout<<"Enter r for nCr calculation :";
    cin>>r;
    cout<<"The nCr for n="<<n<<" and for r="<<r<<" is :"<<nCr(n,r)<<endl;
    
    return 0;
}