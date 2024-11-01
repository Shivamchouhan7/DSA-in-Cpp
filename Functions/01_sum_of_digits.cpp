#include <iostream>
using namespace std;
// program to calculate sum of digits
int digit_Sum(int n){
    int temp=0;
    while(n>0){
        int lastdigit=n%10;
        n/=10;
        temp+=lastdigit;
    }
    return temp;
} 

int main(){
    int num;
    cout<<"Enter the number :";
    cin>>num;
    cout<<"the sum of digits :"<<digit_Sum(num);
    return 0;
}