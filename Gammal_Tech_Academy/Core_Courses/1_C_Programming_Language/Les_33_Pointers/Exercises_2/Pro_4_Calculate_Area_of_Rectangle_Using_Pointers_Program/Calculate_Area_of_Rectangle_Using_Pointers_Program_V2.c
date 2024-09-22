

//* Calculate Area of Rectangle Using Pointers Program (Version 2).

/*
 * Program to Calculate Area of a Rectangle Using Pointers.
 */

/*
! Input:
! Enter the length of the rectangle: 5
! Enter the width of the rectangle: 6

! Output:
! Area of the rectangle: 30.00
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int gettingLengthFun(int len);
int gettingWidthFun(int wid);
void calcAreaOfRectangleFun(int *len, int *wid, float *a);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int length = 0, width = 0;
    float area = 0;

    // Declare Pointer.
    int *ptrLength, *ptrWidth;

    // Calling Functions.
    length = gettingLengthFun(length);
    width = gettingWidthFun(width);

    ptrLength = &length;
    ptrWidth = &width;

    // Calc Area.
    area = *ptrLength * *ptrWidth;

    printf("\nArea of the rectangle: %0.2f", area);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Calculate Area of Rectangle Using Pointers Program (Version 2) ..\n\n");
}

// Getting length - Function.
int gettingLengthFun(int len)
{
    printf("Please Enter the length of the rectangle: ");
    scanf("%d", &len);

    return len;
}

// Getting width - Function.
int gettingWidthFun(int wid)
{
    printf("Please Enter the width of the rectangle: ");
    scanf("%d", &wid);

    return wid;
}
//* End Function ..
