#include <iostream>
#include <climits> // for using INT_MAX and INT_MIN
using namespace std;
// To find smallest and Largest no. in array

int main()
{
    int array[6] = {5, 15, 22, 1, -15, 24};
    int smallest = INT_MAX; // INT_MAX represent +infinity here
    int largest = INT_MIN;  // INT_MIN represent -infinity here
    for (int i = 0; i < 6; i++)
    {
        // if(array[i]<smallest){
        //     smallest=array[i];
        // }
        // above work can be done By using min function
        smallest = min(array[i], smallest);
        // Simillary for maximum by using max function
        largest = max(array[i], largest);
    }
    cout << "Smallest=" << smallest << endl;
    cout << "Largest=" << largest << endl;

    return 0;
}