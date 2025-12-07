#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Maximum Column sum 
int max_col_sum(vector<vector<int>>& arr, int r, int c) {
    int maxsum = INT_MIN;

    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++) {
            sum += arr[i][j];
        }
        maxsum = max(maxsum, sum);
    }
    return maxsum;
}

int main() {
    int r, c;
    cout << "Enter no of rows : ";
    cin >> r;
    cout << "Enter no of columns : ";
    cin >> c;

    vector<vector<int>> mat(r, vector<int>(c));

    cout << "Enter matrix values:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat[i][j];

    cout << "Maximum column sum = " << max_col_sum(mat, r, c);
    return 0;
}
