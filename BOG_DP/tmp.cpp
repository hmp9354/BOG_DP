#include <iostream>

using namespace std;

int main(void) {
    int n = 0;
    cin >> n;

    int* pivo_table = new int[n + 1];
    for (int i = 1; i <= n; i++) {
        if (i == 1) pivo_table[i] = 1;
        else if (i == 2) pivo_table[i] = 2;
        else {
            pivo_table[i] = (pivo_table[i - 1] + pivo_table[i - 2]) % 10007;
        }
    }
    cout << pivo_table[n] << endl;
    delete[] pivo_table;
    return 0;
}