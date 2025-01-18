#include <iostream>
using namespace std;

void findTwoSum(int nums[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "[" << i << ", " << j << "]" << endl;
                return; 
            }
        }
    }
    cout << "No solution found." << endl;
}

int main() {
    int size, target;

    cout << "Enter the size of the array: ";
    cin >> size;

    int nums[size];  
     cout << "Enter the elements of the array: ";
       for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }
    cout << "Enter the target value: ";
    cin >> target;

    cout << "Output: ";
    findTwoSum(nums, size, target);

    return 0;
}
