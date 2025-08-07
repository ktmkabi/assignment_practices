#include <iostream>
using namespace std;

int main() {
    double x1, y1, L;

    cin >> x1;
    cin >> y1;
    cin >> L;
    double xc;
    double yc;
    xc = x1 + L / 2;
    yc = y1 + L / 2;

    // Output: center coordinates
    cout << xc << endl << yc << endl;

    return 0;
}