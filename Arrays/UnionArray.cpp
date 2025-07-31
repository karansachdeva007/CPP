#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr1[] = {1, 2, 4, 5, 6,8};
    int arr2[] = {2, 3, 5, 7,9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int i = 0, j = 0;

    cout << "Union of two sorted arrays: ";
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            cout << arr1[i++] << " ";
        } else if (arr2[j] < arr1[i]) {
            cout << arr2[j++] << " ";
        } else {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }


    while (i < size1) cout << arr1[i++] << " ";
    while (j < size2) cout << arr2[j++] << " ";

    cout << endl;
    return 0;
}
