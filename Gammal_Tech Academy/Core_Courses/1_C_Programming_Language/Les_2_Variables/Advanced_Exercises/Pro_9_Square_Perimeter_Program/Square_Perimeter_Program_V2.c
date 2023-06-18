

/* >>> Square Perimeter Program ( Version 2 ) <<< */

/* >>> Square Perimeter Program.
Required : Write a program that assigns the side length of the square and calculates the perimeter of the square. <<< */

#include <stdio.h>

void wel_mas_fun();
int squ_per_fun(int side_length);

int main()
{
    wel_mas_fun();

    int side_length = 5;
    squ_per_fun(side_length);
        
    return 0;
}

// Functions;

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Square Perimeter Program ( Version 2 ) ..\n\n");
}

// Square Perimeter function;
int squ_per_fun(int side_length)
{
    int perimeter = side_length * 4;

    printf("Square Perimeter is : %d\n\n\n", perimeter);

}