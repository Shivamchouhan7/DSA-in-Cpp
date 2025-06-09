#include <iostream>
#include <algorithm>
using namespace std;

// Binary search with Recursion 
int binarySearch(int arr[],int target,int start ,int end){
    int mid=start+(end-start)/2;
    while(start<=end){
        if(target > arr[mid]){
            return binarySearch(arr,target,mid+1,end);
        }
        else if(target < arr[mid]){
            return binarySearch(arr,target,start,mid-1);
        }
        else return mid;
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int start=0,end=n-1;

    int arr[n];
    cout << "Enter elements of array (unsorted):\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array before binary search
    sort(arr, arr + n);

    int target;
    cout << "Enter target value: ";
    cin >> target;

    int result = binarySearch(arr,target,start,end);

    if(result != -1)
        cout << "Element found at index " << result << " (in sorted array)" << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}