

/* >>> program Sum numbers and multiply them ( Version 4 ) <<< */

/* >>> A program that records 3 digits and prints the total of the first two digits multiplied by the third digit <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in program Sum numbers and multiply them ( Version 4 ) ..\n\n");

    int num_1 = 1,
        num_2 = 2,
        num_3 = 3;

    int result_1 = num_1 + num_2,
        result_2 = result_1 * num_3;

    printf("result is : %d\n\n\n", result_2);

    return 0;
}