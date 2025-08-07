#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int w,x,y; // copies sold // cost per copy //agency spends per copy
    cin>>w>>x>>y;
    int revenue = w * x;            //revenue formula
    int c_cost = w * y;      //expense by company
    int fixed_cost = 100;           // selling price 
    int profit = revenue - c_cost - fixed_cost;
    cout << profit << endl; 
    return 0;
}