#include <iostream>
using namespace std;

//function for linear search
int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i; 
        }
    }
    return -1; // if Element not found
}

int main() {
    int n;
    cout<<"Enter size of Array:";
    cin>>n;
    int arr[n] ;
    cout<<"Enter elements of array :-\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter Target value :";
    cin>>target;

    int result = linearSearch(arr, n, target);

    if(result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
