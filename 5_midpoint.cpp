#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float x1, x2, y1, y2;
     cin >> x1;
     cin >> y1;
     cin >> x2;
     cin >> y2;
   
     double mid  =  (x1+x2)/2.0;
     double mids =  (y1+y2)/2.0;
     cout << fixed << setprecision(1);
     cout << mid << endl << mids;
     return 0;
}