

/* >>> Example 1 <<< */

#include <stdio.h>

void status(int y)
{
    printf(y > 0 ? "positive\n" : (y < 0 ? "negative\n" : "zero\n"));
    printf(y % 2 ? "odd\n" : "Even\n");
}

int digits(int x)
{
    int r = 0;
    while (x)
    {
        x /= 10;
        r++;
    }
    return r;
}

int isPrime(int p)
{
    int i;
    for (i = 2; i < p; i++)
        if (p % i == 0)
            return 0;
    return p > 1 ? 1 : 0;
}

int main()
{
    int x;
    printf("\nEnter a number: ");
    scanf("%d", &x);

    status(x);
    printf("numbers:%d", digits(x));

    isPrime(x);
    printf(isPrime(x) ? "Prime\n\n" : "Not Prime\n\n");

    return 0;
}
