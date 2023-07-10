

/* >>> Mother And Children Program ( Version 6 ) <<< */

/* >>> A program that asks the mother to enter the number of her children and if they are more than 3 prints (you have a lot of kids) lo 2 prints (you have 2 kids) If 1 asks her he is a boy and not a girl and her hands choose to write number 1 or 2 if I write 1 means a boy. (you have a little prince) and if you write 2 means the daughter of the program prints (you have a little princess). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Mother And Children Program ( Version 6 ) ..\n\n");

    int num, boy_or_girl;

    do
    {
        printf("\nPlease enter number of children : ");
        scanf("%d", &num);
    } while ( num <= 0);

    if (num >= 3)
    {
        printf("\n\" You have a lot of kids \"");
    }
    else if (num == 2)
    {
        printf("\n\" You have 2 kids \"");
    }
    else
    {
        do
        {
            printf("\n\" Is it a boy or a girl ? If it's a boy, please enter a number ( 1 ) .. OR .. If it's a girl, please enter a number ( 2 )\" : ");
            scanf("%d", &boy_or_girl);
        } while (boy_or_girl != 1 && boy_or_girl != 2);

        if (boy_or_girl == 1)
        {
            printf("\n\" You have a little prince \"");
        }
        else if (boy_or_girl == 2)
        {
            printf("\n\" You have a little princess \"");
        }
    }

    printf("\n\n\n");

    return 0;
}