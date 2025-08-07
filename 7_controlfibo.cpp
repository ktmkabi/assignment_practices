#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is a perfect square
bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}

// Function to check if n is a Fibonacci Number
bool isFibonacci(int n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int num;
    cin >> num;

    if (isFibonacci(num)) {
        cout << "Fibonacci Number" << endl;
    } else {
        cout << "Not Fibonacci Number" << endl;
    }

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is a perfect square
bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}

// Function to check if n is a Fibonacci Number
bool isFibonacci(int n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int num;
    cin >> num;

    if (isFibonacci(num)) {
        cout << "Fibonacci Number" << endl;
    } else {
        cout << "Not Fibonacci Number" << endl;
    }

    return 0;
}
