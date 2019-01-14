#include <stdio.h>
#include <math.h>

#define K 25

int primes[K] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

char checkIsPrime(unsigned n) {
	if (n == 2) return 1;
	
	unsigned i = 2;
	
	for (; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	
	return 1;
}

// A bit faster because we are not going through all elements from 2 to N, but only the primes.
char checkIsPrimePrecalc(unsigned n) {
	if (n == 2) return 1;
	
	for (int i = 0; primes[i] * primes[i] <= n; i++) {
		if (primes[i] && n % primes[i] == 0) return 0;
	}
	
	return 1;
}

int main() {
	const unsigned n = 9973;
	
	char isItPrime = checkIsPrimePrecalc(n);
	
	printf("%u should be prime: %s\n", n, isItPrime == 1 ? "yes" : "no");
	
	return 0;
}

