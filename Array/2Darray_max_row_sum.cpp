#include <iostream>
#include <vector>
using namespace std;

// Maximum row sum 
int max_row_sum(vector<vector<int>>& arr, int r, int c) {
    int maxsum = INT8_MIN;

    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
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

    cout << "Maximum row sum = " << max_row_sum(mat, r, c);
    return 0;
}
