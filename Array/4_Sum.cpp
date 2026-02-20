#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

/*
4 Sum problem using 2 Pointer approach (Optimal approach )
Time: O(n³)
Space: O(1)
*/

vector<vector<int>> Four_sum(vector<int> &v)
{
    int n = v.size();
    vector<vector<int>> ans;

    sort(v.begin(), v.end());
    for (int i = 0; i < n-3; i++)
    {

        if (i > 0 && v[i] == v[i - 1])
            continue; // for duplicate i

        for (int j = i + 1; j < n-2;)
        {
            int p = j + 1, q = n - 1;

            while (p < q)
            {
                long long sum = (long long)v[i] + v[j] + v[p] + v[q];
                if (sum < 0)
                {
                    p++;
                }
                else if (sum > 0)
                {
                    q--;
                }
                else
                {
                    ans.push_back({v[i],v[j], v[p], v[q]});
                    p++;
                    q--;
                    while (p < q && v[p] == v[p - 1])
                        p++; // for duplicate p
                    while (p < q && v[q] == v[q + 1])
                        q--; // for duplicate q
                }
            }
            j++;
            while(j<n && v[j]==v[j-1]) j++; // for duplicate j
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

    vector<vector<int>> ans = Four_sum(v);

    cout << "result :\n";
    for (auto &quad : ans)
    {
        cout << quad[0] << " " << quad[1] << " " << quad[2] << " " << quad[3] << endl;
    }

    return 0;
}