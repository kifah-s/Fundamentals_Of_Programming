
//* Print Shape 1 Program ..

//* Print on the screen the following Shape 1 using printf ..

/*
! Output:
!          ********
!         *      *
!        *      *
!       *      *
!      ********
*/

#include <stdio.h>

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Print Shape 1 Program ..\n\n");
}

// Print Shape 1 function.
void printShape1Fun()
{
    printf("          *******\n         *     *\n        *     *\n       *     *\n      *******\n\n\n");
}
//* End Function ..

int main()
{
    welcomeMessageFun();

    printShape1Fun();

    return 0;
}