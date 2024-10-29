#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the size of square pattern : ";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            cout<<j<<" ";//same for * just replace j with "*"
        }
        cout<<endl;
    }
    return 0;
}