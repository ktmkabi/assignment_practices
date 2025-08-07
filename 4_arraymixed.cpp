#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int arr[n];
  int even =0;
  int odd=0;
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  for(int j=0;j<n;j++){
    if(arr[j] % 2==0){
      even =1;
    }
    else {
      odd=1;
    }
    if(even > 0 && odd > 0){
      break;
    }
  }
  
  
  if(even >0 && odd>0){
    cout << "Mixed";
  }
  else if(even > 0){
    cout << "Even";
  }
  else{
    cout << "Odd";
  }
  return 0;
} 