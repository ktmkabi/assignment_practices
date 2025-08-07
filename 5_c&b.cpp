#include<iostream>
using namespace std;

class Player {
    string name;
    string country;
    string skill;

public:
    Player() {
        // Default constructor
    }

    friend int main();
};

int main() {
    Player p;

    getline(cin, p.name);
    getline(cin, p.country);
    getline(cin, p.skill);

    cout << "Player Details:" << endl;
    cout << "Player Name: " << p.name  << endl;
    cout << "Country Name: " << p.country << endl;
    cout << "Skill: " << p.skill << endl;

    return 0;
}