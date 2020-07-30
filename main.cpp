/*
 *“Write a program that prompts the user to enter two integer values.
 * Store these values in int variables named val1 and val2.
 * Write your program to determine the  smaller, larger, sum, difference,
 * product, and ratio of these values and report them to the user.”
 */

#include <iostream>

using namespace std;

int main() {

    int num1 {}, num2 {};
    int max {}, min {}, sum {}, diff {}, prod {};
    double ratio {};

    cout << "Please enter the first integer: ";
    cin >> num1;

    cout << "Please enter the second integer: ";
    cin >> num2;

    if (num1 > num2) {
        max = num1;
        min = num2;
    }

    if ( num2 > num1){
        min = num1;
        max = num2;
    }

    if (num1 != num2) {
        cout << "Larger Number: " << max << endl;
        cout << "Small Number: " << min << endl;
    }

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    ratio = static_cast<double> (num1) / num2;

    cout << "Sum of " << num1 << " and " << num2 << ": " << sum << endl;
    cout << "Difference of " << num1 << " and " << num2 << ": " << diff << endl;
    cout << "Product of " << num1 << " and " << num2 << ": " << prod << endl;
    cout << "Ratio of " << num1 << " and " << num2 << ": " << ratio << endl;

    return 0;
}
