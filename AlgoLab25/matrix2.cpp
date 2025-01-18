#include <iostream>
using namespace std;

void inputMatrix(int matrix[][100], int m = 10, int n = 10) {
    cout << "Enter the elements of the matrix (" << m << "x" << n << "):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
}
 void displayMatrix(int matrix[][100], int m = 10, int n = 10) {
    cout << "The matrix is:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    cout << "Enter the number of rows (m) and columns (n): ";
    cin >> m >> n;

    int matrix[100][100]; 
    inputMatrix(matrix, m, n);
    displayMatrix(matrix, m, n);

    return 0;
}

