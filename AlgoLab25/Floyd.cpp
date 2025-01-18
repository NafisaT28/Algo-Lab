#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for Floyd's Triangle: ";
    cin >> n;

    int current = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << current;
            current = 1 - current;
        }
        cout << endl;
    }

    return 0;
}
