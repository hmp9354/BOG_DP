#include <iostream>

int main() {
	int N;
	int list[1001][10] = { 0, };
	scanf_s("%d", &N);

	int result = 0;
	for (int i = 0; i <= 9; i++) {
		list[1][i] = 1;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= j; k++) {
				list[i][j] += list[i - 1][k] % 10007;
			}
		}
	}

	for (int i = 0; i <= 9; i++) {
		result += list[N][i] % 10007;
	}

	printf("%d", result % 10007);
}