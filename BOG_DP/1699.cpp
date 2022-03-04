#include <iostream>

int main() {
	int N;
	int A[1000] = { 0, };
	int list[100002] = { 0, };

	scanf_s("%d", &N);

	for (int i = 0; i < 1000; i++) {
		A[i] = i * i;
	}

	int input = N;
	int num = 0;
	int k = 1;

	for (int i = 999; i >=1; i--) {
		if (A[i] < N) {
			k = i;
			break;
		}
	}
	
	int listnum = 100000;
	list[listnum] = input;

	while (input) {
		if (list[listnum] - A[k] >= 0) {
			list[listnum-1] = list[listnum] - A[k];
			input = list[listnum - 1];
			listnum--;
			num++;
		}
		else {
			k--;
		}		
	}

	printf("%d", num);
}