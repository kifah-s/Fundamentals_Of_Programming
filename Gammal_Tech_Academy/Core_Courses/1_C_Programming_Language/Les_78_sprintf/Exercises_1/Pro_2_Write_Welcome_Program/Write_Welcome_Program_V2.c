

/* >>> Write Welcome Program ( Version 2 ) <<< */

/* >>> A program with an array of char in which the word "hello" is required to be printed, and insert the word "welcome" is written in it (in two different ways). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
void writeWelcomeFun(char arr[50]);


int main()
{
    welcomeMassageFun();

    char arr[50] = "Hello";
    printf("%s\n\n", arr);

    writeWelcomeFun(arr);
    printf("%s\n\n", arr);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Write Welcome Program ( Version 2 ) ..\n\n");
}

// Write Welcome / Function.
void writeWelcomeFun(char arr[50])
{
    sprintf(arr, "Welcome");
}