#include<iostream>
using namespace std;
int main(){
  char a;
  cin >> a;
  if(a >='A' && a <= 'Z'){
    cout <<"Upper";
  }
  else if(a >= '0' && a <='9'){
      cout <<"Number";
  }
  else if(a >= 'a' && a <= 'z'){
      cout << "Lower";
  }
  else {
      cout <<  "Symbol";
  }
  return 0;
}