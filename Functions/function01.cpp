#include <iostream>
using namespace std;
// function 
/* SYNTAX OF FUNCTION :-
Return_type Function_name(Parameter_Type Parameter_Name)
{
body of function
}*/

//For example we are creating a function sum();

//Declaration of function
int sum(int a,int b);

int main(){
    cout<<sum(5,10);          // Function call
    return 0;
}
// Function Definition
int sum(int a, int b){
    return a+b;
}