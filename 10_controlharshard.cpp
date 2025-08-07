#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int temp = num;
    int digitSum = 0;

    // Calculate the sum of digits
    while (temp > 0) {
        digitSum += temp % 10;
        temp /= 10;
    }

    // Check if num is divisible by the sum of its digits
    if (num % digitSum == 0) {
        cout << "Harshad Number" << endl;
    } else {
        cout << "Not Harshad Number" << endl;
    }

    return 0;
}

