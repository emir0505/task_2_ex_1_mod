#include <iostream>
#include "ex1_modified.h"

void main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cerr << "Invalid size!" << std::endl;
        return;
    }

    float* arr = new float[size];

    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int result;
    int status = calculateDifference(arr, size, &result);

    if (status == 0) {
        std::cout << "Difference between sums: " << result << std::endl;
    } else {
        std::cerr << "An error occurred while calculating the difference." << std::endl;
    }

    delete[] arr;
}
