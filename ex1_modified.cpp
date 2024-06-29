#include "ex1_modified.h"

bool sumEvenIndices(const double* arr, int size, double& result) {
    if (size <= 0 || arr == nullptr) {
        return false; // Если размер массива меньше или равен 0 или массив пуст, возвращаем ошибку
    }

    result = 0.0;
    for (int i = 0; i < size; i += 2) {
        result += arr[i];
    }
    return true;
}

bool sumIndicesDivisibleByThree(const double* arr, int size, double& result) {
    if (size <= 0 || arr == nullptr) {
        return false; // Если размер массива меньше или равен 0 или массив пуст, возвращаем ошибку
    }

    result = 0.0;
    for (int i = 0; i < size; ++i) {
        if (i % 3 == 0) {
            result += arr[i];
        }
    }
    return true;
}
