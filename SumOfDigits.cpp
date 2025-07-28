#include <iostream>
using namespace std;

int sumDigits(long long int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    long long int input;
    cout << "Enter a number: ";
    cin >> input;

    cout << "Sum of digits = " << sumDigits(input) << endl;
    return 0;
}


// #include <iostream>
// using namespace std;

// void sumDigits(long long int num) {
//     int sum = 0;
//     while (num > 0) {
//         sum += num % 10;
//         num /= 10;
//     }
//     cout << "Sum of digits = " << sum << endl;
// }

// int main() {
//     long long int input;
//     cout << "Enter a number: ";
//     cin >> input;

//     sumDigits(input);  // no return, just prints from inside the function
//     return 0;
// }
