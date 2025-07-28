#include <iostream>
using namespace std;
int decToBinary(int decNum){
  int power= 1;
  int ans = 0;
  while(decNum>0){
    int rem = decNum %2;
    decNum/=2;
    ans+=(rem*power);
    power*=10;
  }
  return ans;
}
int main() 
{ int n ;
cin>>n;
    cout << decToBinary(n);
    return 0;
}