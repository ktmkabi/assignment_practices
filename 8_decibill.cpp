#include<iostream>
#include<cmath>
using namespace std;
int main(){
  float units;
  cin >> units;
  if(units <= 200.0){
    cout << "Rs." << units * 0.5 << endl;
  }
  else if (units <=300){
    cout << "Rs." << floor(units * 0.65 + 100.0) << endl;
  }
  else if(units >300 && units <= 400){
    cout  << "Rs." << ceil(units * 0.65 + 100.0) << endl;
  }
  else if(units <= 600.0){
    cout << "Rs." << units * 0.80 + 200.0 << endl;
  }
  else
  {
    cout << "Rs." << units * 1.25 + 425.0;
  }
  return 0;
}