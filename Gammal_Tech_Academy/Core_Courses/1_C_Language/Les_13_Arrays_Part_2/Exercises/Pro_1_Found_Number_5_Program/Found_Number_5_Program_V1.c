

/* >>> Found Number 5 Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter 10 numbers, if he finds that there is an entry number = 5 printed to him "found" and after the program is finished it again on its own. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Found Number 5 Program ( Version 1 ) .. \n\n");

    int arr[10], i;

    while (1)
    {
        printf("Please enter ten numbers\n");
        for (i = 0; i < 10; i++)
        {
            printf("Number %d : ", i + 1);
            scanf("%d", &arr[i]);
        }
        printf("\n");

        for (i = 0; i < 10; i++)
        {
            if (arr[i] == 5)
            {
                printf("Number 5 Found\n\n\n");
                break;
            }
        }
    }

    return 0;
}