#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5}; // Fixed size

    // Accessing elements
    std::cout << "First element: " << arr[0] << std::endl;

    // Iteration
    for (int x : arr) {
        std::cout << x << " ";
    }

    return 0;
}

/* 
OUTPUT 

First element: 1
1 2 3 4 5 */