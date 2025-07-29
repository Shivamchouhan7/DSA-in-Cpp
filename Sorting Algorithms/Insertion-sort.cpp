#include <iostream>
#include <vector> 
using namespace std;

//Function for Insertion Sort
void InsertionSort(vector<int> & a,int n){//O(n * n) overall complexity
    for(int i=1;i<n;i++){//O(n)
        int curr = a[i];
        int prev=i-1;
        while(prev >= 0 && a[prev] > curr ){
            a[prev+1] = a[prev];
            prev--;
        }
        a[prev+1]=curr; // Placing the current element in its correct position 
    }
}

/*
Complexity
Time Complexity: O(n²)
Space Complexity: O(1) (in-place sort)
*/

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter elements :-\n";
    for(int &e:vec){
        cin>>e;
    }
    InsertionSort(vec,n);
    cout<<"After Sorting:\n";
    for(int e:vec){
        cout<< e <<" ";
    }
    

    return 0;
}