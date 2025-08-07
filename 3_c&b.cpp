#include<iostream>
using namespace std;

class Delivery {
public:
    long over;
    long ball;
    long runs;
    string batsman;
    string bowler;
    string nonStriker;

    void displayDeliveryDetails() {
        cout << "Delivery Details:" << endl;
        cout << "Over: " << over << endl;
        cout << "Ball: " << ball << endl;
        cout << "Runs: " << runs << endl;
        cout << "Batsman: " << batsman << endl;
        cout << "Bowler: " << bowler << endl;
        cout << "non-Striker: " << nonStriker << endl;
    }
};

int main() {
    Delivery d;

 
    cin >> d.over;

    
    cin >> d.ball;

    
    cin >> d.runs;

    cin.ignore(); // clear input buffer for getline

  
    getline(cin, d.batsman);


    getline(cin, d.bowler);

    getline(cin, d.nonStriker);

    d.displayDeliveryDetails();

    return 0;
}