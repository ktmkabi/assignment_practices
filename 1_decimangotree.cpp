#include<iostream>
using namespace std;
int main(){
int r, c, no;
cin >> r;
cin >> c;
cin >> no;
int cls = (no - 1)/ r-1; //calc column number
    if(c == 2 || c == cls - 1){
    cout << "It is a mango tree";
}
    else
    {
    cout << "It is not a mango tree";
}
return 0;
}