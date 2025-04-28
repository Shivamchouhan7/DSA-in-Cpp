#include <iostream>
#include <vector>
using namespace std;

// return pair in sorted array / vector with target sum
// optimized- approach (Two pointer approach)

vector<int> pairsum(vector<int> nums, int target){
    vector<int> ans;
    int size= nums.size();
    int i=0,j=size-1,pairsum;
    while(i<j){
        pairsum=nums[i]+nums[j];
        if(pairsum>target){
            j--;
        }
        else if(pairsum<target){
            i++;
        }
        else{
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
    }
    return ans;

}
int main(){
    int n,target;
    cout<<"Enter a size of array / vector :- ";
    cin>>n;
    vector<int> vec(n) ;
    cout<<"Enter the elements :- \n ";
    for(int &ele:vec){
        cin>>ele;
    }
    cout<<"Enter target value :";
    cin>>target;
    vector<int> ans=pairsum(vec,target);
    if(!ans.empty()){
        cout<<"Pair for target value " <<target<<" is :- "<< endl;
        cout<<"("<<ans[0]<<","<<ans[1]<<")";
    }
    else{
        cout << "No pair found for target value " << target << "." << endl;
    }

    return 0;
}