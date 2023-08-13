

/* >>> Size Of Box ( Version 2 ) <<< */

/* >>> A program that calculates the size of a box whose length and width are fixed with a value of 5 and 10 and the height is variable for the user by entering its value (size = length x width x height). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int getHightFun();
int calculatingSizeBoxFunction(int length, int width, int height);

int main()
{
    welcomeMassageFun();
    
    const int length = 5, width = 10;

    int height = getHightFun();
    int size = calculatingSizeBoxFunction(length, width, height);

    printf("\nSize of bix = %d\n\n", size);

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Size Of Box ( Version 2 ) ..\n\n");
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
int calculatingSizeBoxFunction(int length, int width, int height)
{
    int size = length * width * height;

    return size;
}