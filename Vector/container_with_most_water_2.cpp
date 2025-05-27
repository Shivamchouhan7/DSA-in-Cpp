#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Container with most water problem 

// By optimized approach (Two pointer approach , Time Complexity: O(n))
int mostWater(vector<int> height){
    int lp=0,rp=height.size()-1;
    int area=0;
    int maxwater=0;
    while(lp<rp){
        int w=rp-lp;
        int h=min(height[lp],height[rp]);
        area=h*w;
        maxwater=max(maxwater,area);
        height[lp]<height[rp] ? lp++ : rp--;
    }
    return maxwater;
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