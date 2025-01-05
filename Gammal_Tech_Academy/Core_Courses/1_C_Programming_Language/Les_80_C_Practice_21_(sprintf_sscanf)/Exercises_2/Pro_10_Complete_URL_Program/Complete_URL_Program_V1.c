

//* Complete URL Program (Version 1).

/*
* Ask the user for a protocol, domain, and path, then create and print a complete URL.

! Input:
! Please enter the Protocol (http/https): https
! Please enter the Domin: www.example.com
! Please enter the Path: page

! Output:
! Complete URL: https://www.example.com/page
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char comURL[], char pro[], char dom[], char path[]);

int main()
{
    // Declare Variables.
    char completeURL[100], protocol[25], domin[25], path[25];

    // Call Functions.
    resultFun(completeURL, protocol, domin, path);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Complete URL Program (Version 1) ..\n\n");
}

// Git Protocol - Function.
void gitProtocolFun(char pro[])
{
    printf("Please enter the Protocol (http/https): ");
    scanf("%s", pro);
}

// Git Domin - Function.
void gitDominFun(char dom[])
{
    printf("Please enter the Domin: ");
    scanf("%s", dom);
}

// Git Path - Function.
void gitPathFun(char path[])
{
    printf("Please enter the Path: ");
    scanf("%s", path);
}

// Complete URL - Function.
void completeURLFun(char comURL[], char pro[], char dom[], char path[])
{
    sprintf(comURL, "Complete URL: %s://%s/%s", pro, dom, path);
}

// Result - Function.
void resultFun(char comURL[], char pro[], char dom[], char path[])
{
    printWelcomeMessageFun();
    gitProtocolFun(pro);
    gitDominFun(dom);
    gitPathFun(path);
    completeURLFun(comURL, pro, dom, path);

    printf("\n%s\n\n", comURL);
}
//* End Function ..
