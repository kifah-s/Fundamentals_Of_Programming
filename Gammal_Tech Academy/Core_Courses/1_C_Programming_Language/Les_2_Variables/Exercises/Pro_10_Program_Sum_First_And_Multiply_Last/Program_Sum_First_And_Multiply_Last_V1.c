

/* >>> program Sum first numbers and Multiply last numbers ( Version 1 ) <<< */

/* >>> A program that  that records 4 digits and prints the sum of the first two digits in a line and multiply the other two digits in another line <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in program Sum first numbers and Multiply last numbers ( Version 1 ) ..\n\n");

    int n1 = 1,
        n2 = 2,
        n3 = 3,
        n4 = 4;

    int res1 = n1 + n2,
        res2 = n3 * n4;

    printf("num_1 + num_2 = %d\nnum_3 * num_4 = %d\n\n\n", res1, res2);

    return 0;
}