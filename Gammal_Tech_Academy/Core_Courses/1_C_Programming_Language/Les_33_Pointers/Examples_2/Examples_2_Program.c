

//* Examples 2 Program.

/*
 * Examples 2 ..
 */

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
// void fun(x, y);
// void fun2(int *x, int *y);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    //* Declare Variables.
    // int x = 5;

    //* Address.
    // printf("X Address: %p\n", &x);

    //* Value.
    // printf("X Value: %d\n", x);
    // printf("X Value: %d\n", *(&x));

    //* ---------------------------------------

    // int x = 2;
    // int *p;
    // p = &x;

    // printf("X Address: %p\n", p);
    // printf("X Value: %d", *p);

    //* ---------------------------------------

    // int x = 10;
    // int *p = &x;
    // printf("X Value: %d", *p);

    // *p = 10;
    // printf("X Value: %d", *p);

    //* ---------------------------------------

    // int *p, x;

    // x = 10;

    // printf("Address of x: %p\n", &x);
    // printf("Value of x: %d\n\n", x); // 10

    // p = &x;

    // printf("Address of pointer p: %p\n", p);
    // printf("Content of pointer p: %d\n\n", *p); // 10

    // x = 15;

    // printf("Address of pointer p: %p\n", p);
    // printf("Content of pointer p: %d\n\n", *p); // 15

    // *p = 25;

    // printf("Address of x: %p\n", &x);
    // printf("Value of x: %d\n\n", x); // 25

    //* ---------------------------------------

    // int x = 5, y = 20;

    // fun(x, y);

    // printf("x= %d  y= %d", x, y);

    //* ---------------------------------------

    // int x = 5, y = 20;

    // fun2(&x, &y);

    // printf("x= %d  y= %d", x, y);

    //* ---------------------------------------

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Examples 2 Program (Version 1) ..\n\n");
}

void fun(int x, int y)
{
    int t = x;
    x = y;
    y = t;
}

void fun2(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
//* End Function ..
