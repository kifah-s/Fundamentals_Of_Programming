

/* >>> Film And Series Program ( Version 2 ) <<< */

/* >>> Film And Series Program : On weekly vacation you can spend some time watching your favorite films and series that you haven't seen yet..
Required: Write a program that prints the names of your favorite films and series you want to watch. <<< */

#include <stdio.h>

void welcome_massage();
void favorite_films();

int main()
{
    welcome_massage();
    favorite_films();
    
    return 0;
}

// Welcome massage function;
void welcome_massage()
{
    printf("\n\nYou welcome in Film And Series Program ( Version 2 ) ..\n");
}

// favorite films function;
void favorite_films()
{
    printf("\nMy favorite films and series is :\n");
    printf("- Breaking bad\n");
    printf("- Attack on titan\n\n\n");
}