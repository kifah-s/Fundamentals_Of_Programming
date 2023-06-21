

/* >>> Birthday Program ( Version 1 ) <<< */

/* >>> A program that asks a person about the date of birth and predicts that the person will set any sign or interval after the day, month and year, and prints them that the date of birth is (day/month/year). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Birthday Program ( Version 1 ) ..\n\n");

    int d,
        m,
        y;

    printf("Enter a birthday : ");
    scanf("%d %*c %d %*c %d", &d, &m, &y);
    printf("\nDate birthday you is : (%d/%d/%d)\n\n\n", d, m, y);

    return 0;
}