#include <iostream>

int main() {
	int list[12];

	int T;
	scanf_s("%d", &T);

	int* N;
	N = new int[T];
	int max = 1;
	for (int i = 0; i < T; i++) {
		scanf_s("%d", &N[i]);
		if (max < N[i]) {
			max = N[i];
		}
	}

	memset(list, 0, sizeof(int) * (max+1));

	list[1] = 1;
	list[2] = 2;
	list[3] = 4;
	for (int i = 4; i <= max; i++) {
		list[i] = list[i - 1] + list[i - 2] + list[i - 3];
	}

	for (int i = 0; i < T; i++) {
		printf("%d\n", list[N[i]]);
	}
	
}
