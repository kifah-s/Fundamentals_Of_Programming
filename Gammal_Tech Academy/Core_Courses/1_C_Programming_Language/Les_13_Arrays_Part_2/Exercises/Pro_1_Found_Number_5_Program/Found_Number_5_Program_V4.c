

/* >>> Found Number 5 Program ( Version 4 ) <<< */

/* >>> A program that asks a person to enter 10 numbers, if he finds that there is an entry number = 5 printed to him "found" and after the program is finished it again on its own. <<< */

#include <stdio.h>

void welcomeMassageFun();
int *enterTenNumbersFun();
int number5FoundFun(int *arr);

int main()
{
    welcomeMassageFun();

    while (1)
    {
        int *arr = enterTenNumbersFun();
        number5FoundFun(arr);
    }

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Found Number 5 Program ( Version 4 ) .. \n\n");
}

// Enter Ten Numbers Function;
int *enterTenNumbersFun()
{
    static int arr[10];

    printf("Please enter ten numbers\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    return arr;
}

// Number 5 Found Function;
int number5FoundFun(int *arr)
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 5)
        {
            printf("Number 5 Found\n\n\n");
            return 0;
        }
    }
}

/* // repeat Function;
int repeatFun()
{
    while (1)
    {
    }
} */