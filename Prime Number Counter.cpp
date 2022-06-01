#include <iostream>
using namespace std;

int main() {
	// Declare variables
	int firstNum, secondNum, i, j, factorCount, primeCount;
	primeCount = 0;
	
	// Input integer from user
	cout << "Enter first integer (beginning value): ";
	cin >> firstNum;
	cout << "Enter second integer (ending value): ";
	cin >> secondNum;
	
	// Calculate number of factors for each number and number of prime numbers in the given range
	for(i = firstNum; i <= secondNum; i++) {
		factorCount = 0;
		for(j = 1; j <= i; j++) {
			if(i % j == 0) {
				factorCount++;
			}
		}
		if(factorCount == 2) {
			primeCount++;
		}
	}
	
	// Output number of prime numbers
	cout << "There are " << primeCount << " prime number(s) in the given range." << endl;
}
