/*
Basic Concepts:
Write a program that takes user input for two numbers
and performs basic arithmetic operations
(addition, subtraction, multiplication, division).
*/

#include <iostream>

using namespace std;

int main_basic_concepts() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    double sum = num1 + num2,
        difference = num1 - num2,
        product = num1 * num2;
    
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;

    if (num2 != 0) {
        double quotient = num1 / num2;
        cout << "Quotient: " << quotient << endl;
    }
    else {
        cout << "Cannot divide by zero." << endl;
    }

    return 0;
}