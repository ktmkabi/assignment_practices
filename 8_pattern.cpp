#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Ascending part
        for (int j = 1; j <= i; ++j)
            cout << j;

        // Descending part
        for (int j = i - 1; j >= 1; --j)
            cout << j;

        cout << '\n'; // Line break after each row
    }
    return 0;
}
