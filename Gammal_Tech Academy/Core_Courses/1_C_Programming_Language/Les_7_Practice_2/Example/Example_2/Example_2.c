

/* >>> Example 2 <<< */

/* >>> A program that takes a password as input from the user and tells the user whether it is correct or wrong. ( Password is : 12345 ) <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in Example 2 ..\n\n");

    int pas;

    printf("Please enter the password : ");
    scanf("%d", &pas);
    // printf("%d\n", pas);

    if (pas == 12345)
    {
        printf("\nThe password is correct\n\n\n");
    }
    else
    {
        printf("\nthe password is wrong\n\n\n");
    }
}