#include <iostream>
#define mod 1000000000

int main() {
	int N;
	scanf_s("%d", &N);

	int list[101][10];
	int sum = 0;
	memset(list, 0, sizeof(int) * 101 * 10);	

	for (int i = 1; i <= 9; i++) {
		list[1][i] = 1;
	}

	for (int i = 2; i <= N; i++) {
		for (int k = 0; k <= 9; k++) {
			if (k == 0) {
				list[i][k] = list[i - 1][1] % mod;
			}
			else if (k == 9) {
				list[i][k] = list[i - 1][8] % mod;
			}
			else {
				list[i][k] = (list[i - 1][k-1] + list[i - 1][k + 1]) % mod;
			}
		}		
	}


	for (int k = 0; k <= 9; k++) {
		sum += list[N][k];
	}
	sum %= mod;

	printf("%d", sum);
}