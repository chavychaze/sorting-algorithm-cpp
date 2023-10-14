int Fuctorial(int number)
{
    if (number == 0)
        return 1;
    
    return number * Fuctorial(number - 1);
}