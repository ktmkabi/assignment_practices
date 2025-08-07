#include <iostream>
using namespace std;

int main() {
    int num, limit;
    cin >> num >> limit;

    for (int i = 1; i <= limit; i++) {
        cout << num << " * " << i << " = " << num * i;
        if (i != limit) {
            cout << " ";  // Add space after each line except the last
        }
    }

    return 0;
}
