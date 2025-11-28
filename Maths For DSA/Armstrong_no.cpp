#include <iostream>
#include <cmath>
using namespace std;

bool check_Armstrong(int n){
    
    if(n<0) return false;
    int copyN=n;
    int count=(n==0) ? 1 : (int)(log10(n)+1);

    int sum=0;

    while(n!=0){
        int digit = n % 10;
        sum += pow(digit, count);
        n/=10;
    }
return copyN==sum;
}
int main(){
    int n;
    cout<<"Enter number to check Armstrong no.: ";
    cin>>n;
    if(check_Armstrong(n)){
        cout<<"Is Armstrong number "<<endl;
    }
    else{
        cout<<"NOT Armstrong number "<<endl;
    }
    return 0;
}