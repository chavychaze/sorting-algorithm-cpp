int Factorial(int number)
{
    return number == 0 ? 1 : number * Factorial(number - 1);
}