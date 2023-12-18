/*
File I/O:
Create a program that reads data from a file,
performs some operations, and writes the results
back to another file.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>

int main_file_io() {
    std::ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Error opening input file." << std::endl;
        return 1; // Exit with an error code.
    }

    std::vector<int> numbers;
    int num;
    while (inputFile >> num) {
        numbers.push_back(num);
    }

    inputFile.close();

    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);

    std::ofstream outputFile("output.txt");

    if (!outputFile.is_open()) {
        std::cerr << "Error opening output file." << std::endl;
        return 1; // Exit with an error code
    }

    outputFile << "Sum of numbers: " << sum << std::endl;

    outputFile.close();

    std::cout << "Operation completed successfully." << std::endl;

    return 0;
}