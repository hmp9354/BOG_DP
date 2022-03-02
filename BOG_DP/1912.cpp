#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	scanf_s("%d", &n);

	int A[100002] = { 0, };
	int list[100002] = { 0, };
	int tmpList[100002] = { 0, };

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &A[i]);
		list[i] = A[i];
	}

	int result = list[0];
	int tmpResult = A[0];

	for (int i = 0; i < n; i++) {		
		for (int k = 0; k < i; k++) {			
			tmpList[k] = A[k];			
			for (int j = k; j < i-1; j++) {
				tmpList[k] += A[j];				
			}

			tmpResult = max(tmpResult, tmpList[k]);
		}		
	}
}