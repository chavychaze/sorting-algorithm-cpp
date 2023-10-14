#include <iostream>

void SelectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (arr[i] > arr[j])
                std::swap(arr[i],arr[j]);
}