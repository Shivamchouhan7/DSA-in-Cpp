#include <iostream>
using namespace std;
// program to convert binary number to decimal number
int bin_to_decimal(int b){
    int ans=0,power=1;
    while(b>0){
        int rem=b%10;
        b=b/10;
        ans+=(rem*power);
        power*=2;

    }
    return ans; // decimal form 
}
int main(){
    int binarynum;
    cout<<"Enter binary number :";
    cin>>binarynum;
    cout<<"DECIMAL of  BINARY number "<<binarynum<<" is "<<bin_to_decimal(binarynum);
    return 0;
}