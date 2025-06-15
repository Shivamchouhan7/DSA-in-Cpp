/*Problem Name: Single element in sorted array
Difficulty: Medium
Tags: Binary Search, Array
Approach - Optimal approach*/
#include <iostream>
#include <vector>
using namespace std;

//Function to return single element in sorted array
int singleElement(vector<int>& vec){
    int n=vec.size();
        int st=0,end=n-1;

        if(n==1){
            return vec[0];
        }
        while(st<=end){
            int mid=st+(end-st)/2;
        
            //Edge cases
            if(mid==0 && vec[0] != vec[1]) return vec[mid];
            if(mid==n-1 && vec[n-1] != vec[n-2]) return vec[mid];


            if(vec[mid-1]!=vec[mid] && vec[mid]!=vec[mid+1]){
                return vec[mid];
            }
            if(mid%2==0){//Even Elements
                if(vec[mid-1]==vec[mid]){//left
                    end=mid-1;
                }
                else{//right
                    st=mid+1;
                }
            }
            else{//Odd Elements
                if(vec[mid-1]==vec[mid]){//right
                    st=mid+1;
                }
                else{//left
                    end=mid-1;
                }
            }
        }
    return -1;

}

int main(){
     int n; //size
    cout<<"Enter size:";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter elements :-\n";
    for(int &e:vec){
        cin>>e;
    }
    int element=singleElement(vec);
    if(element==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"The single element is "<<element;
    }
    
    return 0;
}