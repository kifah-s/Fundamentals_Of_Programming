

/* >>> Program Complete The Number ( Version 1 ) <<< */

/* >>> A program that asks the user to enter number 1 to 9 and the software prints the supplementary number to make the value of both numbers equal to 10 <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Program Complete The Number ( Version 1 ) ..\n\n");

    int n, result;

    printf("Enter a number from 1 to 9 : ");
    scanf("%d", &n);
    result = 10 - n;
    printf("\nThe digit's complement to your number so that the result 10 is : %d\n\n\n", result);

    return 0;
}