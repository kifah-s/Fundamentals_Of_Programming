

/* >>> Mother And Children Program ( Version 3 ) <<< */

/* >>> A program that asks the mother to enter the number of her children and if they are more than 3 prints (you have a lot of kids) lo 2 prints (you have 2 kids) If 1 asks her he is a boy and not a girl and her hands choose to write number 1 or 2 if I write 1 means a boy. (you have a little prince) and if you write 2 means the daughter of the program prints (you have a little princess). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Mother And Children Program ( Version 3 ) ..\n\n");

    int num, boy_or_girl;

    printf("Please enter number of children : ");
    scanf("%d", &num);

    for (; num <= 0;)
    {
        printf("Please enter number of children : ");
        scanf("%d", &num);
    }

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
        printf("\n\" Is it a boy or a girl ? If it's a boy, please enter a number ( 1 ) .. OR .. If it's a girl, please enter a number ( 2 )\" : ");
        scanf("%d", &boy_or_girl);

        if (boy_or_girl == 1)
        {
            printf("\n\" You have a little prince \"");
        }
        else
        {
            printf("\n\" You have a little princess \"");
        }
    }

    printf("\n\n\n");

    return 0;
}