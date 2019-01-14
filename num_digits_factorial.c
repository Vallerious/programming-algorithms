#include <stdio.h>
#include <math.h>

/*
* Example: 10! = 3628800 -> number of digits 7.
*/

unsigned calculateNumberOfDigitsInFactorial(unsigned n) {
	double digits = 0.0;
	
	for (int d = 1; d <= n; d++) {
		digits += log10(d);
	}
	
	return (unsigned) digits + 1;
}

int main() {
	unsigned numDigits = calculateNumberOfDigitsInFactorial(10);
	
	printf("%u\n", numDigits);
	
	return 0;
}

