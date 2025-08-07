#include <iostream>
using namespace std;

int main() {
    int month, year;
    cin >> month >> year;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "Number of days is 31";
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout << "Number of days is 30";
            break;

        case 2:
            // Leap year condition
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                cout << "Number of days is 29";
            else
                cout << "Number of days is 28";
            break;

        default:
            cout << "Invalid month";
    }

    return 0;
} expalin me this code line by line 