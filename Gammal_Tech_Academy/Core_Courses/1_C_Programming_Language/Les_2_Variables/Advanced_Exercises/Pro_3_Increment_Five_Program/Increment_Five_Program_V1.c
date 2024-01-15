

/* >>> Increment Five Program ( Version 1 ) <<< */

/* >>> A program assigns a number in a variable, prints it, and then assigns another variable with the value of the first variable, and it must be incremented by 5. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Increment Five Program ( Version 1 ) ..\n\n");

    int num_1 = 10;
    printf("Before increment : num_1 = %d\n", num_1);

    num_1 = num_1 + 5;
    printf("After increment : num_1 = %d\n\n\n", num_1);

    return 0;
}