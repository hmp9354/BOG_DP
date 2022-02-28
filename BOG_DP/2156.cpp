#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int list[10000] = { 0, };
	int drink[10000] = { 0, };

	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf_s("%d", &drink[i]);
	}

	list[1] = drink[1];
	list[2] = drink[1] + drink[2];
	list[3] = max(drink[1]+drink[2], max(drink[1], drink[2]) + drink[3]);
	for (int i = 4; i <= n; i++) {
		list[i] = max(list[i-2] + drink[i], list[i - 3] + drink[i - 1] + drink[i]);
		list[i] = max(list[i - 1], list[i]);
	}

	printf("%d", list[n]);
}