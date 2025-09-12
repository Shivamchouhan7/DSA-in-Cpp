#include <iostream>
#include<vector>
using namespace std;

/**
 * Sorts an array containing 0s, 1s, and 2s using the Dutch National Flag algorithm.
 *
 * This function partitions the array into three sections:
 * - Elements less than 1 (0s)
 * - Elements equal to 1 (1s)
 * - Elements greater than 1 (2s) 
 *
 * It uses three pointers: low, mid, and high to manage these partitions in a single pass.
 *  return The sorted vector.
 */

vector<int> DNF(vector<int> &arr){
    int n=arr.size();

    // 'low' pointer: points to the last element of the 0s section.
    // 'mid' pointer: the current element being examined.
    // 'high' pointer: points to the first element of the 2s section

    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            // Swap it with the element at 'low' to move it to the 0s section
            // Move both 'low' and 'mid' pointers forward to extend the 0s section
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            // It's already in the correct middle section, so just move to the next element
            mid++;
        }
        else{

            // Swap it with the element at 'high' to move it to the 2s section
            // Only decrement 'high'. The new element at `arr[mid]` needs to be re-evaluated,
            // as it could be a 0 or 1
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    return arr;
}
int main(){
    int n;
    cout<<"Enter the size of array/vector :";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter the elements:-\n";
    for(int &e:vec){
        cin>>e;
    }
    cout<<"before swaping\n";
    for(int e:vec){
        cout<<e<<" ";
    }
    cout<<"\nAfter swaping\n";
    DNF(vec);
    for(int e:vec){
        cout<<e<<" ";
    }
    return 0;
}