/*
Exception Handling:
Write a program that uses try-catch blocks
to handle potential exceptions (e.g., division by zero).
Implement a class with proper resource management
using RAII principles.
*/

#include <iostream>
#include <fstream>
#include <stdexcept>

int main_exception_handling_try_catch() {
    try {
        int numerator = 10;
        int denominator = 0;

        if (denominator == 0) {
            throw std::runtime_error("Division by zero is not allowed.");
        }

        int result = numerator / denominator;

        std::cout << "Result of division: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

class MyFile {
    private:
        std::ofstream file;
    public:
        MyFile(const std::string& filename) : file(filename) {
            if (!file.is_open()) {
                throw std::runtime_error("Failed to open file: " + filename);
            }
            std::cout << "File opened successfully." << std::endl;
        }

        ~MyFile() {
            file.close();
            std::cout << "File closed." << std::endl;
        }

        void writeData(const std::string& data) {
            if (file.is_open()) {
                file << data << std::endl;
                std::cout << "Data written to file." << std::endl;
            }
            else {
                throw std::runtime_error("File is not open.");
            }
        }
};

int main_exception_handling_raii() {
    try {
        MyFile myFile("example.txt");
        myFile.writeData("Hello, RAII!");
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}