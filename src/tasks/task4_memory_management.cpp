/*
Memory Management:
Write a program using pointers to dynamically
allocate and deallocate memory for an array.
Implement a simple smart pointer class
or use standard smart pointers in a program.
*/

#include <iostream>
#include <memory>

namespace {
    int* allocateArray(int size) {
        return new int[size];
    }
    
    void fillArray(int* arr, int size) {
        for (int i = 0; i < size; ++i) {
            arr[i] = i * 2;
        }
    }
    
    void printArray(const int* arr, int size) {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
}

int main_memory_management() {
    int size;
    std::cout << "Enter size of array: ";
    std::cin >> size;

    int* dynamicArray = allocateArray(size);

    fillArray(dynamicArray, size);

    std::cout << "Array contents: ";
    printArray(dynamicArray, size);

    delete[] dynamicArray;

    std::unique_ptr<int[]> smartArray(new int[size]);

    fillArray(smartArray.get(), size);

    std::cout << "Smart array contents: ";
    printArray(smartArray.get(), size);

    return 0;
}