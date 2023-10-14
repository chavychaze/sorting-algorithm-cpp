template <typename T>
inline bool LinearSearch(const T arr[], int size, T key)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            return true;

    return false;
}

template <typename T>
void ShowLinearSearchResult(const T arr[], int size, T key)
{
    if (LinearSearch(arr, size, value))
    {
        std::cout << "The array has your value.\n";
    }
    else
    {
        std::cout << "The array doesn't have your value.\n";
    }
}