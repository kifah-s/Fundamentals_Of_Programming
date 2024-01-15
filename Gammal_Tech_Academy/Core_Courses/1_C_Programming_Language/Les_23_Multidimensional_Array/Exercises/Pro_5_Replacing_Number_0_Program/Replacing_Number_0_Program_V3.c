

/* >>> Replacing Number 0 Program ( Version 3 ) <<< */

/* >>> A program in which 3D array contains a set of numbers, of which there is a number 0 and the user is asked to enter a number and then records this number in zero place and prints the array on the screen. <<< */

#include <stdio.h>

int replacing_number_0();

int main()
{
    printf("\n\nYou welcome in Replacing Number 0 Program ( Version 3 ) ..\n\n");

    replacing_number_0();

    return 0;
}

// Functions ..
// replacing number 0 function;
int replacing_number_0()
{
    // Declaration array;
    int arr[2][2][2] = {{{0, 0}, {2, 3}},
                        {{1, 1}, {6, 7}}};

    // Declaration counters;
    int i, j, k;

    // Printing the  array before changed number 0
    printf("Array is : \n\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("%d    ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // Check if the array contains a number;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                if (arr[i][j][k] == 0)
                {
                    printf("This is array contains number 0\n\n");

                    // Declaration variable and Receive value from user;
                    int num;
                    printf("Please enter a number that replace a number 0 : ");
                    scanf("%d", &num);

                    // replace number 0;
                    printf("\nArray after changed number 0 is : \n\n");
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 2; k++)
                            {
                                if (arr[i][j][k] == 0)
                                {
                                    arr[i][j][k] = num;
                                }
                                printf("%d    ", arr[i][j][k]);
                            }
                            printf("\n");
                        }
                        printf("\n");
                    }
                    printf("\n");
                }
            }
        }
    }
    printf("This is array not contains number 0\n\n\n");

    return 0;
}