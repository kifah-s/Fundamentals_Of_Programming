

// ... Functions ...
int calculate_factorial_Fun(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * calculate_factorial_Fun(x - 1);
    }
}

// ... End Functions ...
