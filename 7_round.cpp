#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    float a;
    cin >> a;
    cout << trunc(a) << endl;//trunc()
    cout << fixed << setprecision(1)  << ceil(a) << endl;//ceil()
    cout << fixed << setprecision(1) << floor(a);//floor()
    return 0;
}