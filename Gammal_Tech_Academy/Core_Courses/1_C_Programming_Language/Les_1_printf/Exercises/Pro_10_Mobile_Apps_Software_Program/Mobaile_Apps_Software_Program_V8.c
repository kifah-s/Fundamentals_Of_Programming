

/* >>> Mobile Apps Software ( Version 8 ) <<< */

/* >>> Mobile Apps Software : When you buy a new mobile there are a lot of apps you want to download and enjoy ..
Required : Write a program that prints the names of apps you like to use. <<< */

#include <stdio.h>

char *wel_mas_fun();
char *mob_app_fun();

int main()
{
    /* printf(wel_mas_fun()); */
    printf("%s", wel_mas_fun());

    /* printf(mob_app_fun()); */
    printf("%s", mob_app_fun());

    return 0;
}

// Function ..
// Welcome massage function;
char *wel_mas_fun()
{
    char *wel_mas = {("\n\nYou welcome in Mobile Apps Software Program ( Version 8 ) ..\n\n")};

    return wel_mas;
}

// mobile apps fuction;
char *mob_app_fun()
{
    char *mop_app = {("The names of apps my like to use is : YouTube\n\n\n")};

    return mop_app;
}