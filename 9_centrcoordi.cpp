#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;

    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;
    double lx;
    double ly;
    lx = (x1 + x2 + x3) / 3.0;
    ly = (y1 + y2 + y3) / 3.0;
    cout << fixed << setprecision(1);
    // Output: center coordinates
    cout << lx << endl << ly << endl;

    return 0;
}