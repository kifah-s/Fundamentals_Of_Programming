

/* >>> Sum 3 Numbers Program In Separate Lines ( Version 1 ) <<< */

/* >>> A program that records 3 digits and prints the sum of each two digits in a separate line <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Sum 3 Numbers Program In Separate Lines ( Version 1 ) ..\n\n");

    int num_1 = 1;
    int num_2 = 2;
    int num_3 = 3;

    printf("Result Sum num_1 and num_2 is : %d\n", num_1 + num_2);
    printf("Result Sum num_2 and num_3 is : %d\n", num_2 + num_3);
    printf("Result Sum num_1 and num_3 is : %d\n\n\n", num_1 + num_3);

    return 0;
}