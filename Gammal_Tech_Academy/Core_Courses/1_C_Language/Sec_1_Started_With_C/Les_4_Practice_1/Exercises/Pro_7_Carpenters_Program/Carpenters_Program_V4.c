

/* >>> Carpenters Program ( Version 4 ) <<< */

/* >>> Carpenters Program : The carpenter uses many nails while making furniture, the carpenter wanted to make some chairs and tables, if the one chair needs 25 nails to make it and the table needs 30 nails.
Required : Write a program that asks a person how many chairs and how many tables he wants to make and prints the total nails he needs. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Carpenters Program ( Version 4 ) ..\n\n");

    int chare, table, screws_ch, screws_ta, screws_total;

    printf("How mane chare yuo need ? ");
    scanf("%d", &chare);
    printf("How mane table yuo need ? ");
    scanf("%d", &table);

    screws_ch = (chare * 25);
    screws_ta = (table * 30);
    screws_total = screws_ch + screws_ta;

    printf("\nThe number of screws you need for char : %d\n", screws_ch);
    printf("The number of screws you need for table : %d\n", screws_ta);
    printf("\nThe number of total screws you need : %d\n\n\n", screws_total);

    return 0;
}