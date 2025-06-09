#include <iostream>
#include <algorithm> // for sort
using namespace std;

// Function for binary search
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target) {
            return mid; // if Element found
        } else if(arr[mid] < target) {
            low = mid + 1; // It will Search in right half
        } else {
            high = mid - 1; // It will Search in left half
        }
    }

    return -1; // If element not Found Element not found
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

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

    int result = binarySearch(arr, n, target);

    if(result != -1)
        cout << "Element found at index " << result << " (in sorted array)" << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
