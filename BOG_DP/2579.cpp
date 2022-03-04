#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	scanf_s("%d", &N);
	int A[303] = { 0, };
	int list[303][2] = { 0, };

	for (int i = 1; i <= N; i++) {
		scanf_s("%d", &A[i]);
	}

	list[1][0] = A[1];
	list[1][1] = A[1];
	list[2][0] = A[2];
	list[2][1] = A[1] + A[2];


	for (int i = 3; i <= N; i++) {
		list[i][0] = max(list[i - 2][0], list[i - 2][1]) + A[i];
		list[i][1] = list[i - 1][0] + A[i];
	}

	int result = max(list[N][0], list[N][1]);

	printf("%d", result);
}