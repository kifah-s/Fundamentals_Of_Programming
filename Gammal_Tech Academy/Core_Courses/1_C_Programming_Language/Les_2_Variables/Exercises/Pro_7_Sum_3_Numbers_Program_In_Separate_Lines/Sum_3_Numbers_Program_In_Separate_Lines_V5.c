

/* >>> Sum 3 Numbers Program In Separate Lines ( Version 5 ) <<< */

/* >>> A program that records 3 digits and prints the sum of each two digits in a separate line <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Sum 3 Numbers Program In Separate Lines ( Version 5 ) ..\n\n");

    int num_1 = 1, num_2 = 2, num_3 = 3;

    int result_1 = num_1 + num_2, result_2 = num_2 + num_3, result_3 = num_1 + num_3;

    printf("Result_1 : num_1 + num_2 = %d\n", result_1);
    printf("Result_2 : num_2 + num_3 = %d\n", result_2);
    printf("Result_3 : num_1 + num_3 = %d\n\n\n", result_3);

    return 0;
}