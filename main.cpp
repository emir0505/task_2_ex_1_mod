#include <iostream>
#include "ex1_modified.h"

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;
    }

    double* arr = new double[size];

    std::cout << "Enter " << size << " elements:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    double sumEven, sumDivisibleByThree;

    if (sumEvenIndices(arr, size, sumEven)) {
        std::cout << "Sum of elements with even indices: " << sumEven << std::endl;
    } else {
        std::cerr << "Error calculating sum of elements with even indices." << std::endl;
    }

    if (sumIndicesDivisibleByThree(arr, size, sumDivisibleByThree)) {
        std::cout << "Sum of elements with indices divisible by three: " << sumDivisibleByThree << std::endl;
    } else {
        std::cerr << "Error calculating sum of elements with indices divisible by three." << std::endl;
    }

    delete[] arr;

    return 0;
}
