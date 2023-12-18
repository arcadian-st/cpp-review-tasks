/*
Object-Oriented Programming (OOP):
Create a class representing a geometric shape (e.g., Circle, Square)
with appropriate attributes and methods.
Implement an inheritance hierarchy with a base class and derived classes.
*/

#include <iostream>

class Shape {
    public:
        virtual double calculateArea() const = 0;
        virtual void displayInfo() const {
            std::cout << "This is a generic shape." << std::endl;
        }
        virtual ~Shape() {

        }
};

class Circle : public Shape {
    private:
        double radius;
    public:
        Circle(double r) : radius(r) {}
        double calculateArea() const override {
            return 3.14159 * radius * radius;
        }
        void displayInfo() const override {
            std::cout << "This is a circle with radius " << radius << "." << std::endl;
        }
};

class Square : public Shape {
    private:
        double side;
    public:
        Square(double s) : side(s) {}
        double calculateArea() const override {
            return side * side;
        }
        void displayInfo() const override {
            std::cout << "This is a square with side length " << side << "." << std::endl;
        }
};

int main_object_oriented_programming() {
    double num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    Circle circle(num1);
    circle.displayInfo();
    std::cout << "Area: " << circle.calculateArea() << std::endl;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    Square square(num2);
    square.displayInfo();
    std::cout << "Area: " << square.calculateArea() << std::endl;

    return 0;
}