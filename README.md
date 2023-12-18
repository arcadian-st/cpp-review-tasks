# C++ Review Tasks

 20 tasks to review the basic concepts of C++.

 Please note that this is a project for C++ developers who learnt and used C++ previously 
 and want to pick up C++ quickly after a break. 
 It does not cover all the points for C++ learners. 
 If you are new to C++, it is a better choice to go through the C++ lessons or tutorials 
 before you read this project.

## Outlines

1. [Get Started](#get-started)
   
   1.1 [Environments](#environments)
   
   1.2 [Project Structures](#project-structures)
   
   1.3 [Build](#build)

3. [Tasks Descriptions](#tasks-descriptions)
   
   2.1 [Task 1: Basic Concepts](#task-1-basic-concepts)
   
   2.2 [Task 2: Functions](#task-2-functions)
   
   2.3 [Task 3: Object-Oriented Programming (OOP)](#task-3-object-oriented-programming-oop)
   
   2.4 [Task 4: Memory Management](#task-4-memory-management)
   
   2.5 [Task 5: Standard Template Library (STL)](#task-5-standard-template-library-stl)
   
   2.6 [Task 6: Exception Handling](#task-6-exception-handling)
   
   2.7 [Task 7: File I/O](#task-7-file-io)
   
   2.8 [Task 8: Templates and Generic Programming](#task-8-templates-and-generic-programming)
   
   2.9 [Task 9: Concurrency](#task-9-concurrency)
   
   2.10 [Task 10: C++11/14/17/20 Features](#task-10-c11141720-features)
   
   2.11 [Task 11: Build Systems](#task-11-build-systems)
   
   2.12 [Task 12: Debugging and Profiling](#task-12-debugging-and-profiling)
   
   2.13 [Task 13: Best Practices](#task-13-best-practices)
   
   2.14 [Task 14: Recent Trends and Updates](#task-14-recent-trends-and-updates)
   
   2.15 [Task 15: Projects](#task-15-projects)
   
   2.16 [Task 16: Online Resources](#task-16-online-resources)
   
   2.17 [Task 17: Practice](#task-17-practice)
   
   2.18 [Task 18: Version Control](#task-18-version-control)
   
   2.19 [Task 19: Testing](#task-19-testing)
   
   2.20 [Task 20: Networking (Optional)](#task-20-networking-optional)

## Get Started

  ### Environments

  * Microsoft Visual C++ Build Tools v19.28.29915
 
  * CMake v3.27

  ### Project Structures

  The executable release will be built from the file

  ```
  src/main.cpp
  ```

  and examples for the tasks are placed in the directory

  ```
  src/tasks/
  ```

  Modify the `main.cpp` file above to insert the code for a task like this:

  ```cpp
  #include "./tasks/task1_basic_concepts.cpp"

  int main() {
      return main_basic_concepts();
  }
  ```

  All the executing functions of the tasks have a prefix 'main_' and are easy to find in the codes.

  ### Build

  All the CMake files except `CMakeLists.txt` are not uploaded in this project.
  You can build and test the project with CMake in the way you like.

  Here is an example to build the project with CMake on the terminal, beginning at the root of the project.

  ```
  mkdir build
  cd build
  cmake ..
  cmake --build .
  cd ..
  ```

  After building the project and returning to the root directory, you can test your executable release in the terminal like this, 
  Assuming that the project was built in the 'Debug' type.

  ```
  ./build/Debug/cpp-review-tasks
  ```

## Tasks Descriptions

  ### Task 1: Basic Concepts

  #### Key Point(s)
    
  * Variables and Data Types
  * Operators and Expressions
  * Control Flow (if, else, switch, loops)

  #### Task(s)

  * Write a program that takes user input for two numbers and performs basic arithmetic operations (addition, subtraction, multiplication, division).
  
  ### Task 2: Functions

  #### Key Point(s)

  * Function declaration and definition
  * Parameters and return types
  * Function overloading

  #### Task(s)

  * Create a function that calculates the factorial of a given number.
  * Implement a function that checks if a number is prime.

  ### Task 3: Object-Oriented Programming (OOP)

  #### Key Point(s)

  * Classes and Objects
  * Inheritance
  * Polymorphism
  * Encapsulation
  * Abstraction

  #### Task(s)

  * Create a class representing a geometric shape (e.g., Circle, Square) with appropriate attributes and methods.
  * Implement an inheritance hierarchy with a base class and derived classes.
  
  ### Task 4: Memory Management

  #### Key Point(s)

  * Pointers and References
  * Dynamic Memory Allocation (new and delete)
  * Smart Pointers (unique_ptr, shared_ptr)

  #### Task(s)

  * Write a program using pointers to dynamically allocate and deallocate memory for an array.
  * Implement a simple smart pointer class or use standard smart pointers in a program.
  
  ### Task 5: Standard Template Library (STL)

  #### Key Point(s)

  * Containers (vector, list, map, etc.)
  * Algorithms (sort, find, etc.)
  * Iterators

  #### Task(s)

  * Use a vector to store a collection of elements and perform various operations (e.g., sorting, searching, iteration).
  * Explore algorithms like `std::find`, `std::sort`, and `std::transform` with different containers.

  ### Task 6: Exception Handling

  #### Key Point(s)

  * try, catch, throw
  * RAII (Resource Acquisition Is Initialization)

  #### Task(s)

  * Write a program that uses try-catch blocks to handle potential exceptions (e.g., division by zero).
  * Implement a class with proper resource management using RAII principles.

  ### Task 7: File I/O

  #### Key Point(s)

  * Reading and Writing to Files

  #### Task(s)

  * Create a program that reads data from a file, performs some operations, and writes the results back to another file.

  ### Task 8: Templates and Generic Programming

  #### Key Point(s)

  * Function Templates
  * Class Templates

  #### Task(s)

  * Implement a function template that swaps the values of two variables.
  * Create a class template for a generic container (e.g., stack or queue).

  ### Task 9: Concurrency

  #### Key Point(s)

  * Threads
  * Mutexes and Locks
  * Thread Safety

  #### Task(s)

  * Write a simple multithreaded program using `std::thread`.
  * Use mutexes to synchronize access to shared data between threads.

  ### Task 10: C++11/14/17/20 Features

  #### Key Point(s)

  * Lambda expressions
  * Smart Pointers
  * Move Semantics
  * Range-based for loops
  * Concepts (C++20)

  #### Task(s)

  * Utilize lambda expressions to define a short function in a program.
  * Explore features like move semantics and range-based for loops in a small project.

  ### Task 11: Build Systems

  #### Key Point(s)

  * Makefiles
  * CMake

  #### Task(s)

  * Create a simple CMake project for one of the programs you've written.

  ### Task 12: Debugging and Profiling

  #### Key Point(s)

  * gdb or other debuggers
  * Profiling tools (e.g., Valgrind)

  #### Task(s)

  * Use a debugger (e.g., gdb) to step through the code and identify bugs.
  * Use a profiling tool (e.g., Valgrind) to analyze the program's memory usage.

  ### Task 13: Best Practices

  #### Key Point(s)

  * Effective C++ practices
  * Code organization and style

  #### Task(s)

  * Review and refactor an existing piece of code following effective C++ practices.

  ### Task 14: Recent Trends and Updates

  #### Key Point(s)

  * Stay updated with recent changes and features in the C++ language.

  #### Task(s)

  * Explore the newest features introduced in the latest C++20 standard.

  ### Task 15: Projects

  #### Key Point(s)

  * Consider working on small projects to apply and solidify your knowledge.

  #### Task(s)

  * Work on a small project that combines multiple concepts you've reviewed.

  ### Task 16: Online Resources

  #### Key Point(s)

  * Refer to online documentation, tutorials, and forums to stay updated.

  #### Task(s)

  * Participate in online forums like Stack Overflow to solve C++ problems and learn from others.

  ### Task 17: Practice

  #### Key Point(s)

  * Regular coding exercises to strengthen your skills.

  #### Task(s)

  * Solve coding challenges on platforms like LeetCode or HackerRank regularly.

  ### Task 18: Version Control

  #### Key Point(s)

  * Git basics for source code management.

  #### Task(s)

  * Set up a Git repository for one of your projects and practice basic version control commands.

  ### Task 19: Testing

  #### Key Point(s)

  * Basics of unit testing frameworks (e.g., Google Test).

  #### Task(s)

  * Learn and implement basic unit tests using a framework like Google Test.

  ### Task 20: Networking (Optional)

  #### Key Point(s)

  * Basic concepts if you're interested in network programming.

  #### Task(s)

  * Explore basic networking concepts in C++ by creating a simple client-server program.
