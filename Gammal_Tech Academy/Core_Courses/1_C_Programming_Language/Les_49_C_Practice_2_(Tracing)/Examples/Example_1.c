

/* >>> Example 1 <<< */

// Include the containing library printf function.
#include <stdio.h>

int main()
{
    // Reserve variables that do not contain any value.
    int i, x;

    // Assign an initial value to a variable x.
    x = 0;

    // Create a loop that rotates 4 times.
    for (i = 1; i < 5; i++)
    {
        // Add the values of variable i to variable xز
        x += i;
    }

    printf("%d\n", x);
    // Print the value of the variable.
}