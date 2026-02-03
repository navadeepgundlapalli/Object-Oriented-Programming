#include <iostream>
using namespace std;

int main() {
    int count = 0, vegs;
    float rate, weight;
    float grandTotal = 0, itemTotal;

    cout << "How many vegetables do you want to bill? ";
    cin >> vegs;

    while(count < vegs) {
        cout << "Enter price per kg: ";
        cin >> rate;

        cout << "Enter weight (kg): ";
        cin >> weight;

        itemTotal = rate * weight;
        grandTotal = grandTotal + itemTotal;

        count++;
    }

    cout << "Final Amount to Pay = " << grandTotal << endl;

    return 0;
}
