#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	scanf_s("%d", &N);
	int list[33] = { 0, };

	int result = 0;
	if (N % 2) {
		result = 0;
	}
	else {
		list[2] = 3;
		list[4] = 11;
		for (int i = 6; i <= N;) {
			list[i] = max(list[i - 4] + 2, list[i - 2] + 3);			
			i += 2;
		}
		result = list[N];
	}

	printf("%d", result);
}