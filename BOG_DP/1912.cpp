#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	scanf_s("%d", &n);

	int A[100002] = { 0, };	
	int list[100002] = { 0, };

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &A[i]);		
	}

	int result = A[0];	
	list[0] = A[0];

	for (int i = 0; i < n; i++) {	
		list[i] = max(list[i - 1] + A[i], A[i]);
		result = max(result, list[i]);
	}

	printf("%d", result);
}