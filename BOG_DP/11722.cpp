#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	scanf_s("%d", &N);

	int A[1002] = { 0, };
	int list[1002] = { 0, };

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &A[i]);
		list[i] = 1;
	}

	int result = list[0];
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < i; k++) {
			if (A[k] > A[i]) {
				list[i] = max(list[i], list[k] + 1);
				result = max(result, list[i]);
			}
		}
	}

	printf("%d", result);
}