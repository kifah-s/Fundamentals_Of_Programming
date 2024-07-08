
//* Print Message 5 Program ..

//* Print on the screen the following message using printf ..

/*
! Output:
! H
!  e
!   l
!    l
!     o
! G a  m   m    a     l
!     T
!    e
!   c
! h!
*/

#include <stdio.h>

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Print Message 5 Program ..\n\n");
}

// Print message 5 function.
void printMessage5Fun()
{
    printf("H\n e\n  l\n   l\n    o \nG a  m   m    a     l\n    T\n   e\n  c\nh!\n\n\n");
}
//* End Function ..

int main()
{
    welcomeMessageFun();

    printMessage5Fun();

    return 0;
}