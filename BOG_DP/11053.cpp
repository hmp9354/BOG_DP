#include <iostream>
#include <algorithm>
#include <memory.h>
using namespace std;

int main() {
	int N;
	scanf_s("%d", &N);

	int A[1002] = { 0, };
	int list[1002];

	for (int i = 0; i < 1002; i++) {
		list[i] = 1;
	}
	
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &A[i]);
	}	
		
	int result = 1;

	for (int i = 0; i < N; i++) {		
		for (int k = 0; k < i; k++) {

			if (A[k] < A[i]) {
				list[i] = max(list[i], list[k] + 1);
			}
		}
		result = max(result, list[i]);
	}

	printf("%d", result);
}