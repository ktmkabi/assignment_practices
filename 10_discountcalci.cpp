#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double price1, price2, discount;
    
    // Input prices and discount percentag
    cin >> price1;
    cin >> price2;
    cin >> discount;

    // Calculate discounted prices and amounts saved
    double discountedPrice1 = price1 - (price1 * discount / 100);
    double discountedPrice2 = price2 - (price2 * discount / 100);

    double amountSaved1 = price1 - discountedPrice1;
    double amountSaved2 = price2 - discountedPrice2;

    // Calculate total amount before and after discount
    double totalBeforeDiscount = price1 + price2;
    double totalAfterDiscount = discountedPrice1 + discountedPrice2;
    double totalAmountSaved = amountSaved1 + amountSaved2;

    // Output results with 2 decimal precision
    cout << fixed << setprecision(2);
    cout << totalBeforeDiscount << endl;
    cout << totalAfterDiscount << endl;
    cout << totalAmountSaved << endl;

    return 0;
}