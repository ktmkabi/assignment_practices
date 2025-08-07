#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int arr[n];
  int even = 0;
  int odd = 0;
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  for(int j=0;j<n;j++){
    if(arr[j]%2==0){
      even++;
    }
    else{
      odd++;
    }
  }
    cout << "Odd: " << odd << endl;
    cout << "Even: " << even;
  
  return 0;

}