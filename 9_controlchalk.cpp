#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int totalDays = n;
    int pieces = n;
    int limit = sqrt(n);

    while (pieces >= limit) {
        int newChalks = pieces / limit;
        totalDays += newChalks;
        pieces = (pieces % limit) + newChalks;
    }

    cout << totalDays << endl;
    return 0;
}
