#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

/*
3 Sum problem using 2 Pointer approach (Optimal approach )
Time: O(n²)
Space: O(1)
*/

vector<vector<int>> Three_sum(vector<int> &v)
{
    int n = v.size();
    vector<vector<int>> ans;  

    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++){

        if(i>0 && v[i]== v[i-1]) continue;//for duplicate i

        int j=i+1,k=n-1;

        while(j<k){
            int sum=v[i]+v[j]+v[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                ans.push_back({v[i],v[j],v[k]});
                j++;
                k--;
                while(j<k && v[j] == v[j-1]) j++; //for duplicate j
                while (j < k && v[k] == v[k + 1]) k--;//for duplicate k
            }
        }
    }

    return ans;

}

int main()
{
    int n;
    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter elements:\n";
    for (int &x : v)
    {
        cin >> x;
    }

    vector<vector<int>> ans = Three_sum(v);

    cout << "Valid triplets are:\n";
    for (auto &trip : ans)
    {
        cout << trip[0] << " " << trip[1] << " " << trip[2] << endl;
    }

    return 0;
}