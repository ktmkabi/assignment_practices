#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,sum=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    
    int root = sqrt(arr[i]);
    if(pow(root,root)==arr[i]){
        sum +=arr[i];
    }
}
cout << sum << endl;
}