#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
Problem:
You are given an n x n grid containing numbers from 1 to n^2.
One number is missing and one number is repeating.
Find the repeating number and the missing number.

Constraints:
- The grid contains numbers from 1 to n^2
- Exactly one number is missing
- Exactly one number appears twice

Return:
A vector containing:
[duplicate, missing]
*/

vector<int> Missing_and_repeating(vector<vector<int>> &grid){
    vector<int> ans;
    unordered_set<int> s;
    int n =grid.size();
    int a = -1, b = -1;
    int expsum=0,actsum=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            actsum+=grid[i][j];
            if(s.find(grid[i][j])!=s.end()){
            a=grid[i][j];
            ans.push_back(a);
            
           }
           s.insert(grid[i][j]);
        }
        
    }
    expsum = (n*n) * (n*n + 1)/2;
    b = expsum + a -actsum;
    ans.push_back(b);
    return ans;

}

int main(){
    int n;
    cout << "Enter grid size: ";
    cin >> n;

    if(n <= 0){
        cout << "Invalid grid size";
        return 0;
    }

    vector<vector<int>> grid(n, vector<int>(n));

    cout << "Enter elements from 1 to " << n*n << ":\n";

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    vector<int> r = Missing_and_repeating(grid);

    if(r.empty()) {
        cout << "No pair found\n";
    } else {
        cout << "Duplicate = " << r[0] 
             << " Missing = " << r[1] << endl;
    }

    return 0;
}