

//* Visits Website Program.

/*
 * Write a program that asks the user to enter a number representing the frequency of their visits to
 * the Gammal Tech website.
 * If the number is more than 20, print "Excellent".
 */

/*
! Input:
! Enter the number of visits to gammal tech website: 30

! Output:
! "Excellent".
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingVisitsForWebsiteFun(int vis);
void moreThan20OrNotFun(int vis);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int visitsWebsite = 0;

    visitsWebsite = gettingVisitsForWebsiteFun(visitsWebsite);
    moreThan20OrNotFun(visitsWebsite);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Visits Website Program ..\n\n");
}

// Getting visits for website function.
int gettingVisitsForWebsiteFun(int vis)
{
    printf("Please Enter the number of visits to gammal tech website: ");
    scanf("%i", &vis);

    return vis;
}

// More than 20 or not function.
void moreThan20OrNotFun(int vis)
{
    if (vis > 20)
    {
        printf("\n\"Excellent\".");
    }
}
//* End Function ..
