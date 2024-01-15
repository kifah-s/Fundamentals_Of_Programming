

/* >>> Program Enter Number ( Version 4 ) <<< */

/* >>> A program that asks the user to enter a number and the software prints it in a new line <<< */

#include <stdio.h>

void wel_mas_function();
int ent_num_fun();

int main()
{
    wel_mas_function();

    printf("\nYour number is : %d\n\n\n", ent_num_fun());

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_function()
{
    printf("\n\nYou welcome in Program Enter Number ( Version 4 ) ..\n\n");
}

// enter a number function;
int ent_num_fun()
{
    int n;

    printf("Enter a number : ");

    scanf("%d", &n);

    // printf("\nYour number is : %d\n\n\n", n);

    return n;
}