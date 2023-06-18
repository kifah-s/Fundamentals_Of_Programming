

/* >>> Areas Program ( Version 2 ) <<< */

/* >>> Areas Program: Sharif wanted to make some modifications in his room and wanted to determine the area of the room.
Required : Make a program that assigns two variables, the first for the width of the room and the second for its length, multiplying the two numbers to calculate the area and then printing the result at the end. <<< */

#include <stdio.h>

void wel_mas_fun();
int areas_fun(int room_length, int room_Show);

int main()
{
    wel_mas_fun();

    int room_length = 5,
        room_Show = 5;

    areas_fun(room_length, room_Show);

    return 0;
}

// Functions;

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Areas Program ( Version 2 ) ..\n\n");
}

// Areas function;
int areas_fun(int room_length, int room_Show)
{
    int result = room_length * room_Show;

    printf("The area of the room is : %d m\n\n\n", result);
}