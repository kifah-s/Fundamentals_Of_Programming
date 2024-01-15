

/* >>> Sum 3 Numbers Program In Separate Lines ( Version 7 ) <<< */

/* >>> A program that records 3 digits and prints the sum of each two digits in a separate line <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Sum 3 Numbers Program In Separate Lines ( Version 7 ) ..\n\n");

    int num_1 = 1, num_2 = 2, num_3 = 3, result_1 = num_1 + num_2, result_2 = num_2 + num_3, result_3 = num_1 + num_3;

    printf("num_1 + num_2 = %d\nnum_2 + num_3 = %d\nnum_1 + num_3 = %d\n\n\n", result_1, result_2, result_3);

    return 0;
}