#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  if(n<0){
    cout << "No factorial";
    return 0;
  }
  int factorial =1;
  for(int i=1;i<=n;i++){
    factorial *=i;
  }
  cout << factorial;
  
  return 0;
}
