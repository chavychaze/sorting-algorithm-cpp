template <typename T>
void InsertionSort(T arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];

        int j;
        for (j=j-1;j >= 0 && arr[j] > key; j--)
            arr[j + 1] = arr[j];

        arr[j + 1] = key;
    }
}