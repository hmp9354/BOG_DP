#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	scanf_s("%d", &N);

	int A[1002] = { 0, };	
	int bigger[1002] = { 0, };
	int bitonic[1002] = { 0, };

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &A[i]);		
		bigger[i] = 1;
		bitonic[i] = 1;
	}

	int bigResult = bigger[0];	
	int bitResult = bigger[0];

	int result = bigger[0];

	for (int i = 0; i < N; i++) {
		for (int k = 0; k < i; k++) {
			if (A[k] < A[i]) {
				bigger[i] = max(bigger[i], bigger[k] + 1);
				bigResult = max(bigResult, bigger[i]);
			}
			else if (A[k] > A[i]) {
				bitonic[i] = max(bitonic[i], bitonic[k] + 1);
				bitonic[i] = max(bitonic[i], bigger[k] + 1);
				
				bitResult = max(bitResult, bitonic[i]);
			}
			int tmp = max(bigResult, bitResult);
			result = max(result, tmp);
		}
	}

	printf("%d", result);
}