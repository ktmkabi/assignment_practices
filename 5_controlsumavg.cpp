#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int num;
    int evenSum = 0, oddSum = 0;
    int evenCount = 0, oddCount = 0;
    
    // Input loop
    do {
        cin >> num;  // Read the number
        
        if (num == -1) {
            break;  // Stop when encountering -1
        }
        
        if (num % 2 == 0) {  // Even number
            evenSum += num;
            evenCount++;
        } else {  // Odd number
            oddSum += num;
            oddCount++;
        }
    } while (num != -1);  // Continue until -1 is encountered

    // Calculate averages with two decimal precision
    float evenAvg = (evenCount > 0) ? static_cast<float>(evenSum) / evenCount : 0.0;
    float oddAvg = (oddCount > 0) ? static_cast<float>(oddSum) / oddCount : 0.0;

    // Output the results, each on a new line
    cout << evenSum << endl;
    cout << oddSum << endl;
    cout << fixed << setprecision(2) << evenAvg << endl;
    cout << fixed << setprecision(2) << oddAvg << endl;

    return 0;
}