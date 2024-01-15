

/* >>> Carpenters Program ( Version 3 ) <<< */

/* >>> Carpenters Program : The carpenter uses many nails while making furniture, the carpenter wanted to make some chairs and tables, if the one chair needs 25 nails to make it and the table needs 30 nails.
Required : Write a program that asks a person how many chairs and how many tables he wants to make and prints the total nails he needs. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Carpenters program ( Version 3 ) ..\n\n");

    int chare, table, screws;

    printf("How mane chare yuo need ? ");
    scanf("%d", &chare);
    printf("How mane table yuo need ? ");
    scanf("%d", &table);

    screws = (chare * 25) + (table * 30);
    printf("\nThe number of screws you need : %d\n\n\n", screws);

    return 0;
}