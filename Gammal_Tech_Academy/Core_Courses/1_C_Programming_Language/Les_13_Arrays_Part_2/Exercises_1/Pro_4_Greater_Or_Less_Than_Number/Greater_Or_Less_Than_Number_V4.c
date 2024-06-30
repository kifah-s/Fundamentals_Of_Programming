

/* >>> Greater Or Less Than Number ( Version 4 ) <<< */

/* >>> The program, in which an array contains 10 numbers, asks the user to enter a number and calculates how many numbers are greater than this number inside the array and how many smaller numbers of this number are inside the array. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getANumberFun();
int greaterOrLessFun(int num);

int main()
{
    welcomeMassageFun();

    int num = getANumberFun();
    greaterOrLessFun(num);
    
    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Greater Or Less Than Number ( Version 4 ) .. \n\n");
}

// Get A Number Function;
int getANumberFun()
{
    int num;
    printf("Please enter a number : ");
    scanf("%d", &num);

    return num;
}

// Greater Or Less Functions;
int greaterOrLessFun(int num)
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, larger = 0, smaller = 0, i;

    for (i = 0; i < 10; i++)
    {
        if (num < arr[i])
        {
            larger++;
        }
        else if (num > arr[i])
        {
            smaller++;
        }
    }
    printf("\nThere are ( %d ) numbers \' Greater \' than the entered number and ( %d ) numbers \' Less \' than it.\n\n\n", larger, smaller);
}

/* // Repeat Function;
int repeatFun()
{
    while (1)
    {
    }
} */