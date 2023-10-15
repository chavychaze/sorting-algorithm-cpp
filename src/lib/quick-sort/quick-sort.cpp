#include <iostream>

template <typename T>
void QuickSort(T arr[], int indexLow, int indexHigh)
{
    T middle = arr[(indexLow + indexHigh) / 2];
    int i = indexLow;
    int j = indexHigh;

    do
    {
        while (arr[j] > middle)
            j--;
        while (arr[i] < middle)
            i++;

        if (i <= j)
        {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    } while (i <= j);

    if(j > indexLow)
        QuickSort(arr, indexLow, j);
    if(i < indexHigh)
        QuickSort(arr, i, indexHigh);
}