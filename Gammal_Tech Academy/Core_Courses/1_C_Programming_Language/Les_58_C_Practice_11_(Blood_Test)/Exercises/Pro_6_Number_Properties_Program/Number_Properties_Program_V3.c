

/* >>> Number Properties Program ( Version 3 ) <<< */

/* >>> A program containing array of different numbers and requesting the user to enter a number.. If the number is not in the array prints not found and if it exists prints found and prints this number characteristics like the previous examples. <<< */

// The solution for Gammal Tech website.
#include <stdio.h>

void fun(int x)
{
    printf(x > 0 ? "positive\n" : (x < 0 ? "negative\n" : "zero\n"));
    printf(x % 2 ? "odd\n" : "Even\n");
}

int digit(int x)
{
    int c = 0;
    while (x != 0)
    {
        x /= 10;
        c++;
    }
    return c;
}

int prime(int x)
{
    int i;
    for (i = 2; i < x; i++)
        if (x % i == 0)
            return 1;
    return 0;
}

int palin(int x)
{
    int y = 0, z = x;
    while (x != 0)
    {
        y = y * 10 + x % 10;
        x /= 10;
    }
    return y == z;
}

int main(void)
{
    int x, n[] = {11, 29, 13, 18, 25, 6, 73, 82, 9, 10}, i, f = 0;
    printf("Enter number: ");
    scanf("%d", &x);
    for (i = 0; i < 10; i++)
    {
        if (n[i] == x)
        {
            f = 1;
            break;
        }
    }
    if (f)
    {
        printf("found\n");
        fun(x);
        printf("digit: %d\n", digit(x));
        printf(prime(x) ? "not prime\n" : "prime\n");
        printf(palin(x) ? "palindrome\n" : "not palindrome\n");
    }
    else
        printf("not found\n");
    return 0;
}