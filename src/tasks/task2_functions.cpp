/*
Functions:
Create a function that calculates the factorial of a given number.
Implement a function that checks if a number is prime.
*/

#include <iostream>
#include <climits>

unsigned long long calculateFactorial(int n) {
    if (n < 0) {
        std::cerr << "Error: Factorial is not defined for negative numbers." << std::endl;
        return 0;
    }

    unsigned long long factorial = 1;
    unsigned long long maxValue = ULLONG_MAX;
    for (int i = 1; i <= n; i++) {
        if (maxValue / factorial < i) {
            std::cerr << "Error: Factorial value is too large to be represented." << std::endl;
            return 0;
        }

        factorial *= i;
    }

    return factorial;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main_functions() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Factorial of " << num1 << ": " << calculateFactorial(num1) << std::endl;

    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << num2 << " is " << (isPrime(num2) ? "prime." : "not prime.") << std::endl;

    return 0;
}