

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    int x, y = 0, z;

    printf("\nEnter number: ");
    scanf("%d", &x);
    z = x; // Save the number;

    while (x)
    {
        y = y * 10 + x % 10;
        x /= 10;
    }
    printf(y == z ? "\nPalindrome\n\n" : "\nNot Palindrome\n\n");

    return 0;
}
