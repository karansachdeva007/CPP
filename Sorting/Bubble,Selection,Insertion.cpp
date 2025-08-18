#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
      for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j < n - i; j++) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}
void selectionSort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int miniIndex = i;
    for(int j = i+1;j<n;j++){
      if(arr[j]<arr[miniIndex]){
        miniIndex=j;
      }
    }
    swap(arr[i],arr[miniIndex]);
  }
}

void insertionSort(int arr[],int n){
  for(int i=1;i<n;i++){
    int curr = arr[i];
    int prev = i-1;
    while(prev>=0 && arr[prev]>curr){
      arr[prev+1]=arr[prev];
      prev--;
    }
    arr[prev+1]=curr;
  }
}

void printArray(int arr[],int n){
      for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main() 
{
    int arr[] = {1, 5, 2, 0, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // bubbleSort(arr,n);
    // insertionSort(arr,n);
    selectionSort(arr,n);
    printArray(arr,n);


   
    return 0;
}
