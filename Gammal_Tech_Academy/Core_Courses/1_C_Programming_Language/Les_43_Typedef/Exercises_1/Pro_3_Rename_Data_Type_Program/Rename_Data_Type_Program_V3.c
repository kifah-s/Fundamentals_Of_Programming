

/* >>> Rename Data Type Program ( Version 3 ) <<< */

/* >>> Software that uses previous orders and has its function: asks the user to enter his name and enter a number then its prints for him his name times the number he entered. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

typedef int gammal_num;
typedef char gammal_text;

void welcomeMassageFun();
gammal_text *getNameFun();
gammal_num getNumberFun();
void printNameFun();

gammal_num main()
{
    welcomeMassageFun();

    printNameFun();

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Rename Data Type Program ( Version 3 ) ..\n\n");
}

// Get name function;
gammal_text *getNameFun()
{
    static gammal_text name[25];
    printf("Please enter your name : ");
    scanf("%s", name);

    return name;
}

// Get number function;
gammal_num getNumberFun()
{
    gammal_num num;
    printf("Please enter a number : ");
    scanf("%d", &num);

    return num;
}

// Print name function;
void printNameFun()
{
    gammal_text *name = getNameFun();
    gammal_num num = getNumberFun();

    for (gammal_num i = 0; i < num; i++)
    {
        printf("\n%s", name);
    }
    printf("\n\n");
}