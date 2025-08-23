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

    char Name[] = "Mohammed Abu-Hadhoud";
    char SchoolName[] = "Programming Advices";

    // print string and String
    printf("Dear %s, How are you?\n\n", Name);
    printf("Welcome to %s School!\n\n", SchoolName);

    char c = 'S';
    printf("Setting the width of c :%*c \n", 1, c);
    printf("Setting the width of c :%*c \n", 2, c);
    printf("Setting the width of c :%*c \n", 3, c);
    printf("Setting the width of c :%*c \n", 4, c);
    printf("Setting the width of c :%*c \n", 5, c);

    cout << endl
         << endl;

    return 0;
}