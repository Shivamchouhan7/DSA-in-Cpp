#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// we have to find container with most water 

// Brute force approach 
int mostWater(vector<int>& height){
    int lb,rb,h,w;
    int n=height.size(); // height of the container
    int area, mostwater=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            w=j-i; // width of container 
            h=min(height[i],height[j]);
            area=w*h; // Area of container 
            mostwater = max(mostwater, area);
        }
        
    }
    return mostwater;
}

int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> height(n);
    cout<<"Enter heights :-\n";
    for(int &e:height){
        cin>>e;
    }
    int result = mostWater(height);
    cout << "Maximum water that can be stored: " << result << endl;
    return 0;
}