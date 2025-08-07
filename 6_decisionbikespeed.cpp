#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    float s;
    cin >> a >> b >> c >> s;

    float ta = (a > 0) ? a / s : 1e9;
    float tb = (b > 0) ? b / s : 1e9;
    float tc = (c > 0) ? c / s : 1e9;

    if (ta < tb && ta < tc){
        cout << "Bike 1 goes into road A";
    }
    else if (tb < ta && tb < tc){
        cout << "Bike 1 goes into road B";
    }   
   else{
        cout << "Bike 1 goes into road C";
    }
  return 0;
}
    