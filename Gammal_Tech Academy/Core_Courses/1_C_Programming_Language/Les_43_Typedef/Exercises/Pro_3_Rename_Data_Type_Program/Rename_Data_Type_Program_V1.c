

/* >>> Rename Data Type Program ( Version 1 ) <<< */

/* >>> Software that uses previous orders and has its function: asks the user to enter his name and enter a number then its prints for him his name times the number he entered. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

typedef int gammal_num;
typedef char gammal_text;

gammal_num main()
{
    printf("\n\nYou welcome in Rename Data Type Program ( Version 1 ) ..\n\n");

    gammal_text name[25];
    printf("Please enter your name : ");
    scanf("%s", name);

    gammal_num num;
    printf("Please enter a number : ");
    scanf("%d", &num);

    for (gammal_num i = 0; i < num; i++)
    {
        printf("\n%s", name);
    }
    printf("\n\n");
    

    return 0;
}