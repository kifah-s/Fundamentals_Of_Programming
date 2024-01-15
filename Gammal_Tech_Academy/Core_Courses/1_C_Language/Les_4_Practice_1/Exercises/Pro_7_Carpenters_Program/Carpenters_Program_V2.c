

/* >>> Carpenters Program ( Version 2 ) <<< */

/* >>> Carpenters Program : The carpenter uses many nails while making furniture, the carpenter wanted to make some chairs and tables, if the one chair needs 25 nails to make it and the table needs 30 nails.
Required : Write a program that asks a person how many chairs and how many tables he wants to make and prints the total nails he needs. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Carpenters Program ( Version 2 ) ..\n\n");

    int chare, table, screws;

    printf("How mane chare yuo need ? ");
    scanf("%d", &chare);
    printf("How mane table yuo need ? ");
    scanf("%d", &table);

    chare = chare * 25;
    table = table * 30;
    screws = chare + table;
    printf("\nThe number of screws you need : %d\n\n\n", screws);

    return 0;
}