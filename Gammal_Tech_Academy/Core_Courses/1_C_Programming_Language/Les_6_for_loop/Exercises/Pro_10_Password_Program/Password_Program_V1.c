

/* >>> Password Program ( Version 1 ) <<< */

/* >>> A program that asks the user for the password if the user enters any number other than 12345 refers the question. If 12345 goes in it says "password is correct". <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Password Program ( Version 1 ) ..\n\n");

    int pass, i;

    for (i = 1; i <= 5; i++)
    {
        printf("Please enter password : ");
        scanf("%d", &pass);

        if (pass == 12345)
        {
            printf("\nPassword is correct");
            break;
        }
        if (i == 5)
        {
            printf("\nPlease try again later");
        }
    }

    printf("\n\n\n");

    return 0;
}