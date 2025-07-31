#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int arr[] = {4, 2, 7, 8, 2, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int start = 0, end = size - 1;
//     while (start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }

//     cout << "Reversed array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

void reverseArray(int arr[],int size){
  int start =0;
  int end=size-1;
      while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

int main(){
  int arr[] = {4, 2, 7, 8, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr,size);
    
       
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}