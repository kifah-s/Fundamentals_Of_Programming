

/* >>> Film And Series Program ( Version 4 ) <<< */

/* >>> Film And Series Program : On weekly vacation you can spend some time watching your favorite films and series that you haven't seen yet..
Required: Write a program that prints the names of your favorite films and series you want to watch. <<< */

#include <stdio.h>

void welcome_massage(char massage[]);
void favorite_films(char favorite[], char breaking[], char attack[]);

int main()
{
    char massage[] = {"You welcome in Film And Series Program ( Version 4 ) .."};
    welcome_massage(massage);

    char favorite[] = {"My favorite films and series is :"};
    char breaking[] = {"- Breaking bad"};
    char attack[] = {"- Attack on titan"};
    favorite_films(favorite, breaking, attack);
    
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