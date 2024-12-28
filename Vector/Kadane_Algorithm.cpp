#include <iostream>
#include<vector>
#include<climits>
using namespace std;
/* Print maximun subarray sum by using kadane's algorithm */
int main(){
    vector<int> vec={-1,2,3,4,5};
    int currsum=0, maxsum=INT_MIN;
    for(int ele:vec){
        currsum+=ele;
        maxsum=max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<"Maximum Subarray sum : "<<maxsum;
    
    return 0;
}