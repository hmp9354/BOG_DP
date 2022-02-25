#include <iostream>

int list[3][100000] = { 0, };
int sumList[3][100000] = { 0, };
void maxPoint() {
	
	int n;
	scanf_s("%d", &n);
	for (int k = 1; k <= 2; k++) {
		for (int j = 1; j <= n; j++) {
			scanf_s("%d", &list[k][j]);
		}
	}

	sumList[1][1] = list[1][1];
	sumList[2][1] = list[2][1];
	for (int i = 2; i <= n; i++) {
		sumList[0][i] += sumList[0][i - 1] + sumList[1][i - 1] + sumList[2][i - 1];
		sumList[1][i] += sumList[0][i - 1] + sumList[2][i - 1];
		sumList[2][i] += sumList[0][i - 1] + sumList[1][i - 1];
	}

	int result = 0;
	for (int i = 0; i < 3; i++) {
		if (result < sumList[i][n]) {
			result = sumList[i][n];
		}
	}

	printf("%d", result);
}

int main() {
	int T;	
	
	scanf_s("%d", &T);

	for (int i = 0; i < T; i++) {			
		maxPoint();		
	}	
}