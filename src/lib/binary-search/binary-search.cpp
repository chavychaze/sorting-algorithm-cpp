template <typename T>
bool BinarySearch(T *arr, int size, T key)
{
    int leftBound = 0, rightBound = size - 1;

    do
    {
        int middle = (leftBound + rightBound) / 2;

        if (key < arr[middle])
            rightBound = middle - 1;
        else if (key > arr[middle])
            leftBound = middle + 1;
        else
            return true;
    } while (leftBound <= rightBound);

    return false;
}

template <typename T>
void ShowBinarySearchResult(const T *arr, int size, T key)
{
    if (BinarySearch(arr, size, key))
    {
        std::cout << "The array has your value.\n";
    }
    else
    {
        std::cout << "The array doesn't have your value.\n";
    }
}