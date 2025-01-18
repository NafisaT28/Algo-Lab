#include <iostream>
using namespace std;

int main() {
    int m, n, p;
    int A[10][10], B[10][10], C[10][10] = {0};

    cout << "Enter rows and columns of matrix A (m n): ";
    cin >> m >> n;
    cout << "Enter columns of matrix B (p): ";
    cin >> p;

    cout << "Enter elements of matrix A (" << m << "x" << n << "):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of matrix B (" << n << "x" << p << "):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Resulting matrix (C):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
