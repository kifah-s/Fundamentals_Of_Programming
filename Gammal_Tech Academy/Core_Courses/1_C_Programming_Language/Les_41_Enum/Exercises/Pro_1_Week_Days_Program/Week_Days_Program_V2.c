

/* >>> Week Days Program ( Version 2 ) <<< */

/* >>> Program arranges weekdays and prints them as numbers. <<< */

#include <stdio.h>
#include <string.h>

int main()
{
    printf("\n\nYou welcome in Week Days Program ( Version 2 ) ..\n\n");

    enum week
    {
        sat,
        sun,
        mon,
        tue,
        wed,
        thu,
        fri
    };

    for (int i = sat; i <= fri; i++)
    {
        printf("\n%d", i + 1);
    }
    printf("\n\n");

    return 0;
}