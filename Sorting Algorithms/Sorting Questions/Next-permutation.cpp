#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// return or Print lexicographically next -> means if there is any array ex. " 1,2,3,6,5,4 " so its next lexicographically is " 1,2,4,3,5,6 "
void next_permutation(vector <int> &arr){
    int n = arr.size();
    int pivot=-1;
    //find pivot element :- Condition A[i]<A[i+1]
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            pivot=i;
            break;
        }
        
    }
    
    //Edge case :- if array is in the form of decreasing order like 5,4,3,2,1 so 1st reverse it then return it 
    if(pivot==-1){
        reverse(arr.begin(),arr.end());
        return ;
    }

    // find right most element greater then pivot and swap it with pivot
    for(int i=n-1;i>pivot;i--){
        if(arr[i]>arr[pivot]){
            swap(arr[i],arr[pivot]);
            break;
        }
    }
    
    // reverse the array from (pivot+1) to n-1
    int i=pivot+1,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
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
    cout<<"before \n";
    for(int e:vec){
        cout<<e<<" ";
    }
    cout<<"\nAfter \n";
    next_permutation(vec);
    for(int e:vec){
        cout<<e<<" ";
    }

    return 0;
}