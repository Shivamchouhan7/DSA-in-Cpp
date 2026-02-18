#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

/*
3 Sum problem using hashing approach (better approach )
Time: O(n²)
Space: O(n)
*/

vector<vector<int>> Three_sum(vector<int> &v)
{
    int n = v.size();
    set<vector<int>> uniqueTriplets;  

    for (int i = 0; i < n; i++)
    {
        int target = -v[i];
        unordered_set<int> set;

        for (int j = i + 1; j < n; j++)
        {
            int third = target - v[j];

            if (set.find(third) != set.end())
            {
                vector<int> trip = {v[i], v[j], third};
                sort(trip.begin(), trip.end());
                uniqueTriplets.insert(trip);
            }

            set.insert(v[j]);
        }
    }

    return vector<vector<int>>(uniqueTriplets.begin(), uniqueTriplets.end());
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