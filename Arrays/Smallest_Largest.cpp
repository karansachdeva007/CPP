#include <bits/stdc++.h>

using namespace std;

int main() {
    int nums[] = {
        5,
        2,
        -8,
        0,
        6,
        -9
    };
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN ;
    for (int i = 0; i < 6; i++) {
        // if (nums[i] < smallest) {
        //     smallest = nums[i];
        // }
        smallest = min(nums[i],smallest);
        largest = max(nums[i],largest);
    }
    cout << "Smallest:" << smallest << endl;
    cout << "Largest:" << largest << endl;
}