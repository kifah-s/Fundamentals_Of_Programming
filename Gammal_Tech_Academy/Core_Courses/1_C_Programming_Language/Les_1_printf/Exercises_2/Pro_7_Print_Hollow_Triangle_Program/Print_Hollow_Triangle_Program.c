
//* Print Hollow Triangle Program ..

//* Print on the screen the following Hollow Triangle using printf ..

/*
! Output:
!       *
!     *   *
!   *       *
!  ***********
*/

#include <stdio.h>

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Print Hollow Triangle Program ..\n\n");
}

// Print Hollow Triangle function.
void printHollowTriangleFun()
{
    printf("     *\n    * *\n   *   *\n  *     *\n ********\n\n\n\n");
}
//* End Function ..

int main()
{
    welcomeMessageFun();

    printHollowTriangleFun();

    return 0;
}