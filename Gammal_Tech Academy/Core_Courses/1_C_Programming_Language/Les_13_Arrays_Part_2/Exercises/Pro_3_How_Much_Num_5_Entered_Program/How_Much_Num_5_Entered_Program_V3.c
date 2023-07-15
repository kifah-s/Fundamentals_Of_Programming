

/* >>> How Much Num 5 Entered Program ( Version 3 ) <<< */

/* >>> A program that asks a person to enter 10 numbers and calculates how many numbers are entered = 5. If he does not find printing "not found" and after the program is finished, it will be reinstated on its own. <<< */

#include <stdio.h>

void welcomeMassageFun();
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
    printf("\n\nYou welcome in How Much Num 5 Entered Program ( Version 3 ) .. \n\n");
}

// How Much Num 5 Entered Function;
int howMuchNum5EnteredFun()
{
    while (1)
    {
        int arr[10], i, sum = 0;

        printf("Please enter ten numbers\n");
        for (i = 0; i < 10; i++)
        {
            printf("Number %d : ", i + 1);
            scanf("%d", &arr[i]);
        }

        for (i = 0; i < 10; i++)
        {
            if (arr[i] == 5)
            {
                sum++;
            }
        }

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