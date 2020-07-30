/*
 *“Write a program that prompts the user to enter two integer values.
 * Store these values in int variables named val1 and val2.
 * Write your program to determine the  smaller, larger, sum, difference,
 * product, and ratio of these values and report them to the user.”
 */

#include <iostream>

using namespace std;

int main() {

    int val1 {}, val2 {};
    int max {}, min {}, sum {}, diff {}, prod {};
    double ratio {};

    cout << "Please enter the first integer: ";
    cin >> val1;

    cout << "Please enter the second integer: ";
    cin >> val2;

    if (val1 > val2) {
        max = val1;
        min = val2;
    }

    if (val2 > val1){
        min = val1;
        max = val2;
    }

    if (val1 != val2) {
        cout << "Larger Number: " << max << endl;
        cout << "Small Number: " << min << endl;
    }

    sum = val1 + val2;
    diff = val1 - val2;
    prod = val1 * val2;
    ratio = static_cast<double> (val1) / val2;

    cout << "Sum of " << val1 << " and " << val2 << ": " << sum << endl;
    cout << "Difference of " << val1 << " and " << val2 << ": " << diff << endl;
    cout << "Product of " << val1 << " and " << val2 << ": " << prod << endl;
    cout << "Ratio of " << val1 << " and " << val2 << ": " << ratio << endl;

    return 0;
}
