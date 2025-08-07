#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  

    int sum = 0;

    {if (n >= 10 && n <= 99) {
        // For two-digit numbers:
        int tens  = n / 10;                 
        int units = n % 10;                  
        sum = tens + units;                 
    }
    
    cout << sum;  // Output the result
    }
    return 0;
}
