#include "ex1_modified.h"

int sumEvenIndices(float* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }
    return sum;
}

int sumIndicesDivisibleByThree(float* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (i % 3 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int calculateDifference(float* arr, int size, int* result) {
    if (!arr || size <= 0 || !result) {
        return -1; // Error code for invalid input
    }

    int sumEven = sumEvenIndices(arr, size);
    int sumDivThree = sumIndicesDivisibleByThree(arr, size);

    *result = sumEven - sumDivThree;
    return 0; // Success code
}
