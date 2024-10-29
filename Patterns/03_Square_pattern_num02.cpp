#include <iostream>
using namespace std;

int main(){
    int n;
    int num=1;
    cout<<"Enter the size of square pattern : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<num<<" ";
            num++;//increament of num each time 
        }
        cout<<endl;
    }
    return 0;
}