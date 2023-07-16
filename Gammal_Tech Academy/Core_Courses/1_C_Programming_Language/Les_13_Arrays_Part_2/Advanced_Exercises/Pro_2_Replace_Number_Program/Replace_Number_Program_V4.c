

/* >>> Replace Number Program ( Version 4 ) <<< */

/* >>> A program, in which array contains 5 digits of these numbers is the number 0, asks the user to enter a number and place it inside the array in place zero and print the array on the screen. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
int replaceNumberFun(int num);

int main()
{
    welcomeMassageFun();

    int num = getNumberFun();
    replaceNumberFun(num);

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Replace Number Program ( Version 4 ) .. \n\n");
}

// Get Number Function;
int getNumberFun()
{
    int num;
    printf("Please enter a number : ");
    scanf("%d", &num);

    return num;
}

// Replace Number Function;
int replaceNumberFun(int num)
{
    int arr[5] = {1, 2, 0, 4, 5}, i;

    printf("\n");

    for (i = 0; i < 5; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = num;
        }
        printf("%d ", arr[i]);
    }
    printf("\n\n\n");
}