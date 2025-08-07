#include <iostream>
using namespace std;

// Print a palindrome framed by stars for a given row 'i'
void printRow(int i) {
    cout << '*';
    for (int j = 1; j <= i; ++j) cout << j;
    for (int j = i - 1; j >= 1; --j) cout << j;
    cout << '*' << '\n';
}

int main() {
    int n;
    cin >> n;

    // Top star
    cout << "*\n";

    // Increasing rows 1 -> n
    for (int i = 1; i <= n; ++i) {
        printRow(i);
    }

    // Decreasing rows n-1 -> 1
    for (int i = n - 1; i >= 1; --i) {
        printRow(i);
    }

    // Bottom star
    cout << "*\n";
    return 0;
}

