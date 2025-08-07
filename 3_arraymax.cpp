#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int arr[n];
  int max = arr[0];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  for(int j=0;j<n-1;j++){
    if(arr[j] > max){
      max=arr[j];
    }
  }
  cout << max << endl;
  return 0;
}