#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// 3 sum problem --brute force approach
// We have to store unique triplets

vector<vector<int>> Three_sum(vector<int> &v)
{
    int n = v.size();

    vector<vector<int>> ans;
    set<vector<int>> s;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (v[i] + v[j] + v[k] == 0)
                {
                    vector<int> trip = {v[i], v[j], v[k]};
                    sort(trip.begin(), trip.end());
                    if (s.find(trip) == s.end())
                    {
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter size of vector :";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements :\n";
    for (int &x : v)
    {
        cin >> x;
    }

    vector<vector<int>> ans = Three_sum(v);
    cout<<"Valid triplets are :-\n";
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}