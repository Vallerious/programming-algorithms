#include <stdio.h>

int MAX = 5;

void fillMatrix(unsigned a[][MAX], unsigned n) {
	int counterMax = MAX * MAX - MAX;
	int counter = 1;
	int offset = 1;
	
	for (int col = 0; col < MAX; col++) {
		for (int row = offset; row < MAX; row++) {
			a[row][col] = counter;
			a[MAX - row - 1][MAX - col - 1] = counter + (2 * MAX);
			counter++;
		}
		
		offset++;
	}
}

void printMatrix(unsigned a[][MAX], unsigned n) {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			printf("%3u ", a[i][j]);
		} 
		
		printf("\n");
	}
}

void zeroFillMatrix(unsigned a[][MAX], unsigned n) {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			a[i][j] = 0;
		} 
	}
}

int main() {
	unsigned matrix[MAX][MAX];
	
	zeroFillMatrix(matrix, MAX);
	fillMatrix(matrix, MAX);
	
	printMatrix(matrix, MAX);	
	
	return 0;
}
