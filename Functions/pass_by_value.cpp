#include <iostream>
using namespace std;

// Pass by value

int sum(int a ,int b ){
    a =a+10;
    b =b+10;
    return a+b;
}
int main(){
    int x=5;
    int y=10;
    cout<<"your sum is"<<sum(x,y)<<endl; /* here only copy of x and y is passed to the function so
     the update done in sum function is not reflect here*/
    cout<<"x is : "<<x<<" and y is : "<<y;
    return 0;
}