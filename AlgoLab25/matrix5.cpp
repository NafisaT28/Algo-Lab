#include <iostream>
using namespace std;

int main() {
    int size, nums[100];
    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    int index = 0; 

    for (int i = 0; i < size; i++) {
        if (nums[i] != 0) {
            nums[index++] = nums[i];
        }
    }
    while (index < size) {
        nums[index++] = 0;
    }
    cout << "Array after moving zeroes: ";
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
