#include<iostream>
using namespace std;

class Innings {
public:
    string number;
    string battingTeam;
    long runs;

    void displayInningsDetails() {
        cout << "Innings Details:" << endl;
        cout << "Innings number: " << number << endl;
        cout << "BattingTeam: " << battingTeam << endl;
        cout << "Runs scored: " << runs << endl;
    }
};

int main() {
    Innings in;

    
    cin >> in.number;

  
    cin >> in.battingTeam;


    cin >> in.runs;

    in.displayInningsDetails();

    return 0;
}