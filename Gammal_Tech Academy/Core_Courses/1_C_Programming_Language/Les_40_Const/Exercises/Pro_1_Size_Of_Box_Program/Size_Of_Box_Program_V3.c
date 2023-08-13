

/* >>> Size Of Box Program ( Version 3 ) <<< */

/* >>> A program that calculates the size of a box whose length and width are fixed with a value of 5 and 10 and the height is variable for the user by entering its value (size = length x width x height). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int getHightFun();
void calculatingSizeBoxFun(int length, int width, int height);

int main()
{
    welcomeMassageFun();

    const int length = 5, width = 10;

    int height = getHightFun();

    calculatingSizeBoxFun(length, width, height);

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Size Of Box Program ( Version 3 ) ..\n\n");
}

// get height function;
int getHightFun()
{
    int height = 0;

    printf("Please enter height of bix : ");
    scanf("%d", &height);

    return height;
}

// Calculating size of box Function;
void calculatingSizeBoxFun(int length, int width, int height)
{
    int size = length * width * height;

    printf("\nSize of bix = %d\n\n", size);
}