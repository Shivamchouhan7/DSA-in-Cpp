#include <iostream>
#include <vector>
using namespace std;

void Merge2Array(vector<int> &A, vector<int> &B,int m,int n){
    int idx=m+n-1 , i=m-1,j=n-1;
    while(i>=0 && j>=0){
        if(A[i]>=B[j]){
            A[idx]=A[i];
            i--;
            idx--;
        }
        else{
            A[idx]=B[j];
            j--;
            idx--;
        }
    }
    while(j>=0){
        A[idx]=B[j];
        j--;
        idx--;
    }
}

int main(){
    int m, n;
    cout << "Enter size of 1st sorted array:";
    cin >> m;
    cout << "Enter size of 2nd sorted array:";
    cin >> n;

    // The first vector `v1` must be sized to accommodate all elements.
    vector<int> v1(m + n);
    vector<int> v2(n);

    cout << "Enter 1st sorted array elements:\n";
    // Read only the first 'm' elements into v1.
    for (int i = 0; i < m; ++i) {
        cin >> v1[i];
    }
    
    cout << "Enter 2nd sorted array elements:\n";
    for (int &e : v2) {
        cin >> e;
    }

    cout << "After merging, the final array is:\n";
    Merge2Array(v1, v2,m,n);

    for (int e : v1) {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}