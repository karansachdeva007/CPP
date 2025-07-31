#include <bits/stdc++.h>

using namespace std;

int linearSearch(int arr[],int size,int key){
  for(int i=0;i<size;i++){
    if(arr[i]==key){
      return i;
    }
  }
  return -1;
  
}

int main() {
int arr[]={4,2,7,8,2,5};
int size = 6;
  int key = 55;
cout<<linearSearch(arr,size,key)<<endl;
}