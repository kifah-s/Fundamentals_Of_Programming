

/* >>> Street Number Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter his address that contains the street number.
Required : Prints 10 street numbers after the street entered by the user. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
char *userAddressFun(char arr[]);
int readNumberFun(char arr[], int num);
void next10StreetsFun(int num);

int main()
{
    welcomeMassageFun();

    char arr[100];
    userAddressFun(arr);
    // printf("\n%s\n\n", arr); // Check.

    int num = readNumberFun(arr, num);
    // printf("\n%d\n\n", num); // Check.

    next10StreetsFun(num);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Street Number Program ( Version 1 ) ..\n\n");
}

// User address / Function.
char *userAddressFun(char arr[])
{
    printf("Please enter your address .. (Note: Street Number First): ");
    scanf("%[^\n]", arr);

    return arr;
}

// Read number from string / Function.
int readNumberFun(char arr[], int num)
{
    sscanf(arr, "%d", &num);

    return num;
}

// numbers of next 10 streets / Function.
void next10StreetsFun(int num)
{
    for (int i = 0; i < 10; i++)
    {
        num++;
        printf("Street number: #%d\n", num);
    }
    printf("\n\n");
}