
//* Print Shape 2 Program ..

//* Print on the screen the following Shape 2 using printf ..

/*
! Output:
!     *
!    *  *
!   *    *
!    *  *
!      *
*/

#include <stdio.h>

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Print Shape 2 Program ..\n\n");
}

// Print Shape 2 function.
void printShape2Fun()
{
    printf("      *\n     *  *\n    *    *\n     *  *\n      *\n\n");
}
//* End Function ..

int main()
{
    welcomeMessageFun();

    printShape2Fun();

    return 0;
}