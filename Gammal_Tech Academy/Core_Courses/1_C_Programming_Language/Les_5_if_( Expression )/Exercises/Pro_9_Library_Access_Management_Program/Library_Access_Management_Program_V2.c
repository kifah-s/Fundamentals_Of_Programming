

/* >>> Library Access Management Program ( Version 2 ) <<< */

/* >>> Library Access Management Program :  When you go to the library, you are assigned an Internet browser and you are handed a paper with the number of the role in which the device is assigned to you.
Required : Type a program that asks the user to enter a number and print "Take the stairs" if the number is 1 and print "Take the elevator" if another number <<< */

#include <stdio.h>

void welcomeMassageFun();
int libraryFun();

int main()
{
    welcomeMassageFun();
    libraryFun();

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Library Access Management Program ( Version 2 ) ..\n\n");
}

// Library function;
int libraryFun()
{
    int num;
    printf("Please enter a number : ");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("\nPlease take the stairs\n\n\n");
    }
    else
    {
        printf("\nPlease take the elevator\n\n\n");
    }
}