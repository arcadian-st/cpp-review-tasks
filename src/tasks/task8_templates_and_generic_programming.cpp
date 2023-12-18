/*
Templates and Generic Programming:
Implement a function template that swaps the values of two variables.
Create a class template for a generic container (e.g., stack or queue).
*/

#include <iostream>
#include <vector>

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main_templates() {
    int x = 5, y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;

    swapValues(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    return 0;
}

template <typename T>
class MyContainer {
    private:
        std::vector<T> elements;
    public:
        void addElement(const T& element) {
            elements.push_back(element);
        }

        void displayElements() const {
            std::cout << "Elements in the container: ";
            for (const T& element : elements) {
                std::cout << element << " ";
            }
            std::cout << std::endl;
        }
};

int main_generic_programming() {
    MyContainer<int> intContainer;
    intContainer.addElement(42);
    intContainer.addElement(17);
    intContainer.displayElements();

    MyContainer<std::string> stringContainer;
    stringContainer.addElement("Hello");
    stringContainer.addElement("World");
    stringContainer.displayElements();

    return 0;
}