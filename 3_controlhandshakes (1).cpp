#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int handshakes = 0;
    for(int i=1;i<n;i++){
        handshakes += n-i;
    }
    cout << handshakes;
    return 0;
}