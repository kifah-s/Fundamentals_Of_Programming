

/* >>> Areas Program ( Version 1 ) <<< */

/* >>> Areas Program: Sharif wanted to make some modifications in his room and wanted to determine the area of the room.
Required : Make a program that assigns two variables, the first for the width of the room and the second for its length, multiplying the two numbers to calculate the area and then printing the result at the end. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Areas Program ( Version 1 ) ..\n\n");

    int room_length = 5,
        room_Show = 5,
        result = room_length * room_Show;

    printf("The area of the room is : %d m\n\n\n", result);

    return 0;
}