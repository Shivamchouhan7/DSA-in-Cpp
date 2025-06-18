#include <iostream>
#include <vector>
using namespace std;

//Book Allocation problem 

// function to check valid ans 

bool ispossible(vector<int> & arr,int n,int m,int maxallowedpages){
    int student=1, pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxallowedpages){
            return false;
        }
        if(pages+arr[i] <= maxallowedpages){
            pages+=arr[i];

        }
        else{
            student++;
            pages=arr[i];
        }

    }
    return student <= m;

}

// Function to allocate books 
int book_allocation(vector<int> &arr,int n,int m){
    //Sum of all book pages
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int st=0,end=sum; // range of possible answers
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(ispossible(arr,n,m,mid)){// if valid
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans; 

}


int main(){
    int n; //size
    int m;
    cout<<"Enter no. of Books :";
    cin>>n;
    cout<<"Enter no. of Students";
    cin>>m;
    vector<int> vec(n);
    cout<<"Enter book pages  :-\n";
    for(int &e:vec){
        cin>>e;
    }
    cout << "Minimum pages: " << book_allocation(vec, n, m) << endl;
    return 0;
}