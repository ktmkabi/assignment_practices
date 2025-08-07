#include<iostream>
using namespace std;
int main(){
  int num;
  cin >> num;
  int square = num * num;
  if(num<10)
  {
    if(square % 10 == num){
      cout << "Automorphic Number";
    }
    else {
      cout << "Not Automorphic Number";
    }
    
  }
  else if(num < 100) 
  {
    if(square % 100 == num){
      cout << "Automorphic Number";
  } else
  {
    cout << "Not Automorphic Number";
  }
  }
  else if(num < 1000)
  {
    if(square % 1000 == num)
    {
    cout << "Automorphic Number";
  }
  else{
    cout << "Not Automorphic Number";
  }
  }
  return 0;
}
