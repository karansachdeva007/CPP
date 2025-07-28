#include <iostream>
using namespace std;

int productDigits(long long int num) {
    int product = 1;
    while (num > 0) {
        product *= num % 10;
        num /= 10;
    }
    return product;
}

int main() {
    long long int input;
  
    cin >> input;

    cout << "product of digits = " << productDigits(input) << endl;
    return 0;
}


// #include <iostream>
// using namespace std;

// void productDigits(long long int num) {
//     int product = 1;
//     while (num > 0) {
//         product *= num % 10;
//         num /= 10;
//     }
//     cout << "product of digits = " << product << endl;
// }

// int main() {
//     long long int input;
// 
//     cin >> input;

//     productDigits(input);  // no return, just prints from inside the function
//     return 0;
// }
