#include <iostream>
#include<climits>
using namespace std;
/* Print maximun subarray sum by using kadane's algorithm */
/* kadane's algorithm not include negative value in the sum 
because it reduces the maximum sum of that array and 
Negative sums won't contribute to a maximum subarray ,
whenever the currentsum becomes -ve it re assing currentsum=0 
(except for negative integer array where max sum is negative ) */
int main() {
    
    int arr[5] = {1, -2, 3, 4, 5};

    // currentsum: Tracks the sum of the current subarray
    // maxsum: Stores the maximum sum found so far
    int currentsum = 0, maxsum = INT_MIN;
    for (int i = 0; i < 5; i++) {
        
        currentsum += arr[i];
        maxsum = max(maxsum, currentsum);

        // If currentsum becomes negative, reset it to 0
        // Negative sums won't contribute to a maximum subarray
        if (currentsum < 0) {
            currentsum = 0;
        }
    }
    cout << "Max subarray sum = " << maxsum;

    return 0;
}