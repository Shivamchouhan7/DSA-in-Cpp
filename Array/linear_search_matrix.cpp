#include <iostream>
using namespace std;

bool LinearSearch(int mat[][6], int r, int c, int target) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (mat[i][j] == target)
                return true;
        }
    }
    return false;
}

int main() {
    int r, c = 6; 
    cout << "Enter no of rows: ";
    cin >> r;

    int target;
    cout << "Enter your target value: ";
    cin >> target;

    int matrix[100][6];  // max rows = 100

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    if (LinearSearch(matrix, r, c, target)) {
        cout << "Target found!" << endl;
    } else {
        cout << "Target not found!" << endl;
    }

    return 0;
}
