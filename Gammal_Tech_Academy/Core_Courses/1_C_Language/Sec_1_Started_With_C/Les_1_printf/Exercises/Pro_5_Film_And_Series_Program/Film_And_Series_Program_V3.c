

/* >>> Film And Series Program ( Version 3 ) <<< */

/* >>> Film And Series Program : On weekly vacation you can spend some time watching your favorite films and series that you haven't seen yet..
Required: Write a program that prints the names of your favorite films and series you want to watch. <<< */

#include <stdio.h>

void welcome_massage(char massage[]);
void favorite_films(char favorite[], char breaking[], char attack[]);

int main()
{
    welcome_massage("You welcome in Film And Series Program ( Version 3 ) ..");
    favorite_films("My favorite films and series is :", "- Breaking bad", "- Attack on titan");
    
    return 0;
}

// Welcome massage function;
void welcome_massage(char massage[])
{
    printf("\n\n%s\n\n", massage);
}

// favorite films function;
void favorite_films(char favorite[], char breaking[], char attack[])
{
    printf("%s\n\n", favorite);
    printf("%s\n", breaking);
    printf("%s\n\n\n", attack);
}