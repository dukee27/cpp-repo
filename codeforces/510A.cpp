#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char A[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if (i % 2 == 0) {
                A[i][j] = '#';
            } else if (i % 4 == 1) {
                if (j == m - 1) {
                    A[i][j] = '#';
                } else {
                    A[i][j] = '.';
                }
            } else if (i % 4 == 3) {
                if (j == 0) {
                    A[i][j] = '#';
                } else {
                    A[i][j] = '.';
                }
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << A[i][j];
        }
        cout << "\n";
    }

    return 0;
}
