

/* >>> Email Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a complete e-mail and print the words before the @ sign in a line and the words after the @ sign in a second line. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
void getEmailFun(char arr_1[25], char arr_2[25]);

int main()
{
    welcomeMassageFun();

    char arr_1[25], arr_2[25];
    getEmailFun(arr_1, arr_2);
    printf("\nUser Name: %s\n", arr_1);
    printf("Domein Name: %s\n\n", arr_2);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Email Program ( Version 1 ) ..\n\n");
}

// Get Email / Function.
void getEmailFun(char arr_1[25], char arr_2[25])
{
    printf("Please enter your Email: ");
    scanf("%[^@] %*c %[^\n]", arr_1, arr_2);
    // %[^@] : Read Sentences before  @ .
    // %*c : Read @ .
    // %[^/] : Read Sentences after  @ .
}