#include <iostream>
using namespace std;

int findDuplicate(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        int index = abs(nums[i]) - 1; 

        if (nums[index] < 0) {
            return abs(nums[i]);
        }
        nums[index] = -nums[index];
    }
    return -1; 
}
   int main() {
     int size;
     cout << "Enter the size of the array: ";
     cin >> size;

     int nums[size];
     cout << "Enter the elements of the array: ";
     for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    int duplicate = findDuplicate(nums, size);
    cout << "The duplicate number is: " << duplicate << endl;

    return 0;
}
