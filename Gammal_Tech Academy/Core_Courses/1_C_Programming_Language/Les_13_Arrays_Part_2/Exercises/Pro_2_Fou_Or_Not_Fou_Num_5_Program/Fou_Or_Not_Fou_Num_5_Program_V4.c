

/* >>> Found Or Not Found Number 5 Program ( Version 4 ) <<< */

/* >>> A program that asks a person to enter 10 numbers, if he finds that there is an entry number = 5 printed to him "found" and if he does not find a print "not found" and after the program is finished, it will be reinstated on its own. <<< */

#include <stdio.h>

void welcomeMassageFun();
int *enterTenNumbers();
int foundOrNotFoundFun(int *arr);

int main()
{
    welcomeMassageFun();

    while (1)
    {
        int *arr = enterTenNumbers();
        foundOrNotFoundFun(arr);
    }

    return 0;
}

// Function;
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Found Or Not Found Number 5 Program ( Version 4 ) .. \n\n");
}

// Enter Ten Numbers Function;
int *enterTenNumbers()
{
    static int arr[10];

    printf("Please enter ten numbers\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    return arr;
}

// Found Or Not Found Function;
int foundOrNotFoundFun(int *arr)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == 5)
        {
            printf("\nNumber 5 Found\n\n\n");
            return 0;
        }
    }
    if (arr[i] != 5)
    {
        printf("\nNumber 5 Not Found\n\n\n");
    }
}

/* // repeat Function;
int repeatFun()
{
    while (1)
    {
    }
} */