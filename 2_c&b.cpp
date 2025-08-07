#include<iostream>
using namespace std;

class Venue {
    string name;
    string city;

public:
    Venue() {
        // Default constructor - no logic required
    }

    // Granting main access to private members
    friend int main();
};

int main() {
    Venue v;

    getline(cin, v.name);

    getline(cin, v.city);

    cout << "Venue Details:" << endl;
    cout << "Venue Name: " << v.name << endl;
    cout << "City Name: " << v.city << endl;

    return 0;
}