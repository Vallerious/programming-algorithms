#include <stdio.h>
#include <stdbool.h>
#define MAXN 30000

const unsigned n = 200;
bool sieve[MAXN];

void sieveNumbers(unsigned n) {
	unsigned j, i = 2;
	
	while (i <= n) {
		if (sieve[i] == true) {
			j = i * i;
			printf("%5u", i);
			while (j <= n) {
				sieve[j] = false;
				j += i;
			}
		}
		
		i++;
	}	
}

int main() {
	for (int i = 0; i < MAXN; i++) sieve[i] = true;
	
	sieveNumbers(n);
	
	return 0;
}
