#include <iostream>
using namespace std;
/* program of Linear Search */
// Function for linear search
int linear_search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            return i; // Returns the index of element if found
        }
    }
    return -1; // Returns -1 if element not found
}
int main()
{
    int arr[7]={4,2,7,8,1,2,5};
     // let target=8
    cout<<linear_search(arr,7,8)<<endl;// print index 
    return 0;
}