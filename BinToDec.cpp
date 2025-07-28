#include <iostream>
using namespace std;
int binaryToDec(long long binNum) {
    int power = 1;
    int ans = 0;

    while (binNum > 0) {
        int rem = binNum % 10;
        binNum /= 10;
        ans += rem * power;
        power *= 2;
    }

    return ans;
}

int main() 
{ int n ;
cin>>n;
    cout <<binaryToDec(n);
    return 0;
}