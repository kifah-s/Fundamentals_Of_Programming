
//* Print Shape 3 Program ..

//* Print on the screen the following Shape 3 using printf ..

/*
! Output:
!     *********
!    *         *
!   *   0    0  *
!    *   ***   *
!     *********
*/

#include <stdio.h>

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Print Shape 3 Program ..\n\n");
}

// Print Shape 3 function.
void printShape3Fun()
{
    printf("        *********\n       *         *\n     *    0   0    *\n       *   ***   *\n         ********\n\n");
}
//* End Function ..

int main()
{
    welcomeMessageFun();

    printShape3Fun();

    return 0;
}