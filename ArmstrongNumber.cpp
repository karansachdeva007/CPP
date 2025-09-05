#include <iostream>
#include <cmath>
using namespace std;

bool Armstrong(int n) {
	int original = n;
	int digits = 0;

	// count digits
	int temp = n;
	while (temp != 0) {
		digits++;
		temp /= 10;
	}

	int sum = 0;
	temp = n;
	while (temp != 0) {
		int digit = temp % 10;
		sum += pow(digit, digits);
		temp /= 10;
	}

	return sum == original;
}

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	if (Armstrong(n)) {
		cout << n << " is an Armstrong number\n";
	} else {
		cout << n << " is NOT an Armstrong number\n";
	}

	return 0;
}
