#include <iostream>
#include<climits>
using namespace std;
/* Print maximun subarray sum  */
int main(){
    int arr[5]={-1,2,3,4,5};
    int maxsum=INT_MIN;
    for(int start=0;start<5;start++){
        int currsum=0;
        for(int end=start;end<5;end++){
            currsum+=arr[end];
            maxsum = max(currsum,maxsum);  
        }
    }
    cout<<"Max subarray sum ="<<maxsum;
    return 0;
}