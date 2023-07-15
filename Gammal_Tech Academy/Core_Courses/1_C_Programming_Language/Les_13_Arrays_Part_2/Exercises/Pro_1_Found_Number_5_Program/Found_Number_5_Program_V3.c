

/* >>> Found Number 5 Program ( Version 3 ) <<< */

/* >>> A program that asks a person to enter 10 numbers, if he finds that there is an entry number = 5 printed to him "found" and after the program is finished it again on its own. <<< */

#include <stdio.h>

void welcomeMassageFun();
int foundNumber5Fun();

int main()
{
    welcomeMassageFun();
    foundNumber5Fun();
    
    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Found Number 5 Program ( Version 3 ) .. \n\n");
}

// Found Number 5 Function;
int foundNumber5Fun()
{
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
                return 0;
            }
        }
    }
}