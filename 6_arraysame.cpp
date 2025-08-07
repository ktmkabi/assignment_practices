#include<iostream>
using namespace std;
int main(){
    int a,b,sum=0,num=0;
    cin >> a;
    cin >> b;
    int arr1[a];
    int arr2[b];
    for(int i=0;i<a;i++){
        cin >> arr1[i];
        sum+=arr1[i];
    }
    for(int j=0;j<b;j++){
        cin >> arr2[j];
        num+=arr2[j];
    }
    if(num==sum){
        cout << "Same";
    }
    else{
        cout << "Not Same";
    }
    return 0;
}