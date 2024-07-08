

//* Print Message 2 Program ..

//* Print on the screen the following message using printf ..

/*
! Output:
! Hello
! Gammal Tech!
*/

#include <stdio.h>

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Print Message 2 Program ..\n\n");
}

// Print message 2 function.
void printMessage2Fun()
{
    printf("Hello \nGammal Tech!\n\n\n");
}
//* End Function ..

int main()
{
    welcomeMessageFun();

    printMessage2Fun();

    return 0;
}