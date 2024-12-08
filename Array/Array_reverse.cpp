#include <iostream>
using namespace std;
/* Reverse an array*/
// function for reversing of an array
void reverse(int arr[],int size){
    int start=0,end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
int main(){
    int array[]={5,6,7,2,8,9,4};
    reverse(array,7);
    // using For each loop
    for(int element:array){
        cout<<element<<" ";
    }
    
    return 0;
}