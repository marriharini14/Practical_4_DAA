#include <iostream>
#include <algorithm> // For std::swap

void recursiveSelectionSort(int arr[], int size, int index = 0) {
    if (index >= size - 1) {
        return;
    }

    int minIndex = index;
    for (int i = index + 1; i < size; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    std::swap(arr[index], arr[minIndex]);
    recursiveSelectionSort(arr, size, index + 1);
}

int main() {
    int size;

    std::cout << "Enter size: ";
    std::cin >> size;

    int* arr = new int[size];

    std::cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    recursiveSelectionSort(arr, size);

    std::cout << "Sorted result: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    return 0;
}
