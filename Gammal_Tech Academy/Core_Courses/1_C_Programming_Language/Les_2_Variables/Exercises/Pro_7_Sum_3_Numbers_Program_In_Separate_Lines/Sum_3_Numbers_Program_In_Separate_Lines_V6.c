

/* >>> Sum 3 Numbers Program In Separate Lines ( Version 6 ) <<< */

/* >>> A program that records 3 digits and prints the sum of each two digits in a separate line <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Sum 3 Numbers Program In Separate Lines ( Version 6 ) ..\n\n");

    int num_1 = 1, num_2 = 2, num_3 = 3;

    int result_1 = num_1 + num_2, result_2 = num_2 + num_3, result_3 = num_1 + num_3;

    printf("Result_1 : num_1 + num_2 = %d\nResult_2 : num_2 + num_3 = %d\nResult_3 : num_1 + num_3 = %d\n\n\n", result_1, result_2, result_3);

    return 0;
}