#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums[] = {5, 2, -8, 0, 6, -9};
    int size = sizeof(nums) / sizeof(nums[0]);

    int smallest = INT_MAX, largest = INT_MIN;
    int smallestIndex = -1, largestIndex = -1;

    // Find smallest and largest with their indices
    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
            smallestIndex = i;
        }
        if (nums[i] > largest) {
            largest = nums[i];
            largestIndex = i;
        }
    }

    // Swap them
    swap(nums[smallestIndex], nums[largestIndex]);

    cout << "Array after swapping smallest and largest:" << endl;
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
