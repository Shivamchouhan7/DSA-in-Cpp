#include <iostream>
#include <cmath> //for alternate of count
using namespace std;

// to count digit 

int digit_count(int n){
    if(n == 0) return 1;

    n = abs(n);// handles negative no. , This loop method will also give correct answer when we don't write this
    int count=0;
    while(n!=0){
        n/=10;
        count++;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    cout<<"Digits (loop Method) = "<<digit_count(n)<<endl;

    // Another alternate for this count using log10
    if(n == 0){
        cout << "Digits (log Method) = 1" << endl;
    }
    else{
        cout << "Digits (log Method) = " << (int)(log10(abs(n)) + 1) << endl;
    }
    return 0;
}