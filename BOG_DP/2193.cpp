#include <iostream>

int main() {
	int N;
	scanf_s("%d", &N);

	long long list[92][3] = { 0, };

	list[1][0] = 0;
	list[1][1] = 1;	

	for (int i = 2; i <= N; i++) {
		list[i][0] = list[i - 1][0] + list[i - 1][1];
		list[i][1] = list[i - 1][0];
	}

	long long result = 0;
	result = list[N][0] + list[N][1];

	printf("%d", result);
}