//without third variable
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper half including middle row
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << j;
        }
        cout << '\n';
    }

    // Lower half excluding middle
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << j;
        }
        cout << '\n';
    }

    return 0;
}
//with third variable
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Build upper half (rows 1 to n), odd-length sequences
    for (int i = 1; i <= n; i++) {
        int len = 2 * i - 1; // number of digits in this row
        for (int j = 1; j <= len; j++) {
            cout << j;
        }
    }

    // Build lower half (rows n-1 down to 1)
    for (int i = n - 1; i >= 1; i--) {
        int len = 2 * i - 1;
        for (int j = 1; j <= len; j++) {
            cout << j;
        }
    }

    return 0;
}
