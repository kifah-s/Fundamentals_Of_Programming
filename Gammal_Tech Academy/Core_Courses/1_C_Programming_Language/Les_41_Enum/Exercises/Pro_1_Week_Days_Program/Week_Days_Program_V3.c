

/* >>> Week Days Program ( Version 3 ) <<< */

/* >>> Program arranges weekdays and prints them as numbers. <<< */

#include <stdio.h>
#include <string.h>

int main()
{
    printf("\n\nYou welcome in Week Days Program ( Version 3 ) ..\n\n");

    enum week
    {
        sat = 1,
        sun,
        mon,
        tue,
        wed,
        thu,
        fri
    };

    for (int i = sat; i <= fri; i++)
    {
        printf("\n%d", i);
    }
    printf("\n\n");

    return 0;
}