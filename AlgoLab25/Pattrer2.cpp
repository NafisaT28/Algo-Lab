#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for the pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == n) { 
            for (int j = 1; j <= n; j++) {
                cout << "*";
            }
        } else {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
