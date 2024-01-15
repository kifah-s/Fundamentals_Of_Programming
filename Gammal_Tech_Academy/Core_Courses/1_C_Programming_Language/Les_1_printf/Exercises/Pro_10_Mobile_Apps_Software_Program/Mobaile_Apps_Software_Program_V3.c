

/* >>> Mobile Apps Software ( Version 3 ) <<< */

/* >>> Mobile Apps Software : When you buy a new mobile there are a lot of apps you want to download and enjoy ..
Required : Write a program that prints the names of apps you like to use. <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void mob_app_fun(char mop[]);

int main()
{
    wel_mas_fun("\n\nYou welcome in Mobile Apps Software Program ( Version 3 ) ..\n\n");
    mob_app_fun("The names of apps my like to use is : YouTube\n\n\n");

    return 0;
}

// Function ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// mobile apps fuction;
void mob_app_fun(char mop[])
{
    printf("%s", mop);
}