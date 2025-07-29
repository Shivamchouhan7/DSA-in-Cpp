#include <iostream>
#include <vector> 
using namespace std;

//Function for Selection Sort
void SelectionSort(vector<int> & a,int n){//O(n * n) overall complexity
    for(int i=0;i<n;i++){//O(n)
        int si=i; // Smallest element 
        for(int j=i+1;j<n;j++){//O(n * n)
            if(a[j]<a[si]){
                si=j;
            }
        }
        swap(a[i],a[si]);
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
    SelectionSort(vec,n);
    cout<<"After Sorting:\n";
    for(int e:vec){
        cout<< e <<" ";
    }
    

    return 0;
}