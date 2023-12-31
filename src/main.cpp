#include <iostream>
#include <ctime>

#include "./lib/searching-algorithms.h"

void Initialize(int arr[], int size);
void Show(const int arr[], int size);

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));

    const int SIZE = 10;
    int arr[SIZE];

    Initialize(arr, SIZE);
    Show(arr, SIZE);

    // Quick Sort algorithm
    QuickSort(arr, 0, SIZE - 1);

    // Binary Search algorithm start --- SHOULD BE SORTED ARRAY
    std::cout << "Enter value that you want to find: ";
    int bValue;
    std::cin >> bValue;

    ShowBinarySearchResult(arr, SIZE, bValue);
    // algorithm end

    // Recursion
    std::cout << "5! = " << Factorial(5) << std::endl;

    // Insertion Sort algorithm
    InsertionSort(arr, SIZE);

    // Bubble Sort algorithm
    BubbleSort(arr, SIZE);

    // Selection Sert alrorithm
    SelectionSort(arr, SIZE);

    // Linear Search algorithm start
    std::cout << "Enter value that you want to find: ";
    int value;
    std::cin >> value;

    ShowLinearSearchResult(arr, SIZE, value);
    // algorithm end

    return 0;
}

inline void Initialize(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 100;
}

inline void Show(const int* arr, int size)
{
    if (arr == nullptr)
        return;

    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}