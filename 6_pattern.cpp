#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Leading spaces
        for (int j = 1; j <= n - i; j++) cout << ' ';
        // Stars and inner spaces
        for (int k = 0; k < 2 * i - 1; k++) {
            if (k == 0 || k == 2 * i - 2)
                cout << '*';
            else
                cout << ' ';
        }
        cout << '\n';
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << ' ';
        for (int k = 0; k < 2 * i - 1; k++) {
            if (k == 0 || k == 2 * i - 2)
                cout << '*';
            else
                cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}
