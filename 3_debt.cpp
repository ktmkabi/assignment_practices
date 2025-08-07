#include<iostream>
#include<iomanip>
using namespace std;

int main(){

double princ_amt, r_interest, time_period;

  cin >> princ_amt;
  cin >> r_interest;
  cin >> time_period;

double interest, total_amt, discount, final_settlement;

interest = (princ_amt * r_interest * time_period)/100.0;
total_amt = princ_amt + interest;
discount = interest*2.0/100.0;

final_settlement = total_amt-discount;
cout << fixed << setprecision(2) << interest << endl;
cout << fixed << setprecision(2) << total_amt << endl;
cout << fixed << setprecision(2) << discount << endl;
cout << fixed << setprecision(2) << final_settlement;
return 0;

}