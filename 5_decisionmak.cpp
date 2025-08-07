#include <iostream>
using namespace std;

int main() {
   int a,b,c;
   cin >> a;
   cin >> b;
   cin >> c;
   int d = 75;
   int e = 50;
   if((b*d) + (c*e) < a){
       cout << "Boat is stable";
   }
   else {
       cout << "Boat is unstable";
   }
   return 0;
}