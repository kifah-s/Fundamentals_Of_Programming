#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    // print string and int variable
    int Page = 1, TotalPages = 10; 
    printf("The page number = %d \n", Page);
    printf("You are in Page %d of %d \n", Page, TotalPages);

    // Width specification
    printf("The page number =  %0*d \n", 2, Page);
    printf("The page number =  %0*d \n", 3, Page);
    printf("The page number =  %0*d \n", 4, Page);
    printf("The page number =  %0*d \n", 5, Page);
 
    int Number1 = 20, Number2 = 30;
    printf("The Result of %d + %d = %d \n", Number1, Number2, Number1 + Number2);

    cout << endl
         << endl;

    return 0;
}