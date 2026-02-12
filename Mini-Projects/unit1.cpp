#include <iostream>
using namespace std;

int main() {
    int count = 0, vegs;
    float rate, weight;
    float grandTotal = 0, itemTotal;
    float gstAmount, finalTotal;

     const float GST_RATE = 0.05;

    cout << "====================================\n";
    cout << "        VEGETABLE BILLING SYSTEM     \n";
    cout << "====================================\n";

    cout << "Enter number of vegetables to bill: ";
    cin >> vegs;

    cout << "------------------------------------\n";

    while(count < vegs) {
        cout << "Item " << count + 1 << endl;
        cout << "------------------------------------\n";
        cout << "Enter price per kg (Rs): ";
        cin >> rate;
        cout << "Enter weight (kg): ";
        cin >> weight;

        itemTotal = rate * weight;
        grandTotal += itemTotal;

        cout << "Item Total = Rs " << itemTotal << endl;
        cout << "------------------------------------\n";

        count++;
    }
    gstAmount = grandTotal * GST_RATE;
    finalTotal = grandTotal + gstAmount;

    cout << "====================================\n";
    cout << "        FINAL BILL SUMMARY           \n";
    cout << "====================================\n";

    cout << "Subtotal = Rs " << grandTotal << endl;
    cout << "GST (5%) = Rs " << gstAmount << endl;
    cout << "Total Amount to Pay = Rs " << finalTotal << endl;

    cout << "====================================\n";

    return 0;
}
