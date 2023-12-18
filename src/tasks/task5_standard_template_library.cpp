/*
Standard Template Library (STL):
Use a vector to store a collection of elements
and perform various operations
(e.g., sorting, searching, iteration).
Explore algorithms like std::find,
std::sort, and std::transform with different containers.
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main_standard_template_library() {
    std::vector<int> numbers = {5, 2, 8, 3, 1, 7, 4, 6};

    std::sort(numbers.begin(), numbers.end());

    int targetValue = 4;
    auto resultIterator = std::find(numbers.begin(), numbers.end(), targetValue);

    std::vector<int> squaredNumbers;
    squaredNumbers.reserve(numbers.size());
    std::transform(numbers.begin(), numbers.end(), std::back_inserter(squaredNumbers),
        [](int x) { return x * x; }
    );

    std::cout << "Sorted and squared Vector: ";
    for (const auto& num : squaredNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    if (resultIterator != numbers.end()) {
        std::cout << "Found " << targetValue << " at position " << std::distance(numbers.begin(), resultIterator) << std::endl;
    }
    else {
        std::cout << targetValue << " not found in the vector." << std::endl;
    }

    return 0;
}