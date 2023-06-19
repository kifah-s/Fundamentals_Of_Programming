

/* >>> Program Complete The Number ( Version 4 ) <<< */

/* >>> A program that asks the user to enter number 1 to 9 and the software prints the supplementary number to make the value of both numbers equal to 10 <<< */

#include <stdio.h>

void wel_mas_function();
int com_num_fun();

int main()
{
    wel_mas_function();

    int com_number = com_num_fun();
    printf("\nThe digit's complement to your number so that the result 10 is : %d\n\n\n", com_number);
    
    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_function()
{
    printf("\n\nYou welcome in Program Complete The Number ( Version 4 ) ..\n\n");
}

// Complete Number function;
int com_num_fun()
{
    int n, result;

    printf("Enter a number from 1 to 9 : ");
    scanf("%d", &n);

    result = 10 - n;

    //printf("\nThe digit's complement to your number so that the result 10 is : %d\n\n\n", result);

    return result;
}