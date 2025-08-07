#include <iostream>
using namespace std;

int main() {
    int dollar1, cent1, dollar2, cent2;
    cin >> dollar1 >> cent1 >> dollar2 >> cent2;

    int totalCents = cent1 + cent2;
    int carryDollar = totalCents / 100;         // Convert 100 cents to 1 dollar
    int finalCents = totalCents % 100;          // Remaining cents
    int finalDollars = dollar1 + dollar2 + carryDollar;

    cout << finalDollars << endl << finalCents << endl;

    return 0;
}