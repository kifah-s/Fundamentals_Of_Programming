

/* >>> How Much Num 5 Entered Program ( Version 6 ) <<< */

/* >>> A program that asks a person to enter 10 numbers and calculates how many numbers are entered = 5. If he does not find printing "not found" and after the program is finished, it will be reinstated on its own. <<< */

#include <stdio.h>

void welcomeMassageFun();
int *enterTenNumbersFun();
int foundNumber5Fun(int *arr);
int howMuchNum5EnteredFun();

int main()
{
    welcomeMassageFun();

    howMuchNum5EnteredFun();

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in How Much Num 5 Entered Program ( Version 6 ) .. \n\n");
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

    return arr;
}

// Found Number 5 Function;
int foundNumber5Fun(int *arr)
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 5)
        {
            sum++;
        }
    }

    return sum;
}

// How Much Num 5 Entered Function;
int howMuchNum5EnteredFun()
{
    while (1)
    {
        int *arr = enterTenNumbersFun();
        int sum = foundNumber5Fun(arr);

        if (sum > 0)
        {
            printf("\nThe number 5 has been entered : %d times\n\n\n", sum);
            break;
        }
        else
        {
            printf("\nNumber 5 Not Found\n\n\n");
        }
    }
}