

/* >>> Program Change Value Of Variable ( Version 2 ) <<< */

/* >>> A program that assigns a number in a variable and prints it, then assigns another number in the same variable and prints it. <<< */

#include <stdio.h>

void wel_mas_fun();
void cha_val_fun();

int main()
{
    wel_mas_fun();
    cha_val_fun();
    
    return 0;
}

// Functions ..

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Program Change Value Of Variable ( Version 2 )  ..\n\n");
}

// Change value of variable function;
void cha_val_fun()
{
    int num = 10;
    printf("Before change : %d\n", num);

    num = 5;
    printf("After change : %d\n\n\n", num);
}