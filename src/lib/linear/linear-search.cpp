template <typename T>
bool LinearSerch(const T arr[], int size, T key)
{
    for(int i = 0; i < size; i++)
        if(arr[i] == key)
            return true;

    return false;
}