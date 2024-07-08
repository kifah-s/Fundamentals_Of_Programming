
//* Print Square Program ..

//* Print on the screen the following square using printf ..

/*
! Output:
! **********
! *        *
! *        *
! **********
*/

#include <stdio.h>

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Print Square Program ..\n\n");
}

// Print Square function.
void printSquareFun()
{
    printf("**********\n*        *\n*        *\n**********\n\n\n");
}
//* End Function ..

int main()
{
    welcomeMessageFun();

    printSquareFun();

    return 0;
}