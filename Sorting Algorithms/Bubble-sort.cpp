#include <iostream>
#include <vector> 
using namespace std;

//Function for Sorting 
void BubbleSort(vector<int> & a,int n){//O(n * n) overall complexity
    for(int i=0;i<n;i++){//O(n)
        for(int j=0;j<n-i-1;j++){//O(n * n)
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    vector<int> vec(n);
    for(int &e:vec){
        cin>>e;
    }
    BubbleSort(vec,n);
    cout<<"After Sorting:\n";
    for(int e:vec){
        cout<< e;
    }
    

    return 0;
}