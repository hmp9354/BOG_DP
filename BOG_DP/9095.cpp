//#include <iostream>
//
//int main() {
//	int list[12];
//
//	int T;
//	scanf_s("%d", &T);
//
//	int* N;
//	N = new int[T];
//	int max = 1;
//	for (int i = 0; i < T; i++) {
//		scanf_s("%d", &N[i]);
//		if (max < N[i]) {
//			max = N[i];
//		}
//	}
//
//	memset(list, 0, sizeof(int) * (max+1));
//
//	list[1] = 1;
//	list[2] = 2;
//	list[3] = 4;
//	for (int i = 4; i <= max; i++) {
//		list[i] = list[i - 1] + list[i - 2] + list[i - 3];
//	}
//
//	for (int i = 0; i < T; i++) {
//		printf("%d\n", list[N[i]]);
//	}
//	
//}

#include <iostream>
#include <algorithm>

using namespace std;

int insertTable(int table[], int maxN) {
	int count = 0;
	int temp2, temp3 = 0;
	for (int i = 1; i < maxN + 1; i++) {
		if (i == 1) table[i] = 0;
		else {
			if (i % 2 == 0) {
				temp2 = table[i / 2] + 1;
			}
			else {
				temp2 = maxN;
			}
			if (i % 3 == 0) {
				temp3 = table[i / 3] + 1;
			}
			else {
				temp3 = maxN;
			}
			int tmin = min(temp2, temp3);
			table[i] = min(table[i - 1] + 1, tmin);
		}
	}
	return table[maxN];
}

int main(void) {
	int N, result = 0;
	cin >> N;
	int* table = new int[N + 1];

	result = insertTable(table, N);

	delete[] table;
	return 0;

}