#include <iostream>
#include<climits>
using namespace std;
/* Print maximun subarray sum by using kadane's algorithm */
/*
Kadane's Algorithm: 
Find the maximum sum of a contiguous subarray within a one-dimensional array of numbers.
Key Idea:
- Avoid adding negative sums to the result since they decrease the overall maximum sum.
- Reset the current sum to 0 if it becomes negative.

Time Complexity: O(n)
*/
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