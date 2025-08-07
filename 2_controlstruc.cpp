#include<iostream>
using namespace std;
int main(){
  int sum=0;
  int num;
  
  do{
    cin >> num;
    if(num !=-1){
      sum += num;
    }
}while(num!=-1);
cout << sum << endl;
return 0;
  
} 