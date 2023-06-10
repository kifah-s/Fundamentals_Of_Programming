

/* >>> Hello 5 Times Program ( Version 13 ) <<< */

/* >>> A program that prints the word "Hello" using 5 different printf orders <<< */

#include <stdio.h>

char *welcome_message();
char *print_hello_1();
char *print_hello_2();
char *print_hello_3();
char *print_hello_4();
char *print_hello_5();

int main()
{
    char *wel_mas[] = {welcome_message()};
    printf(*wel_mas);

    char *hel_1[] = {print_hello_1()};
    printf(*hel_1);

    char *hel_2[] = {print_hello_2()};
    printf(*hel_2);

    char *hel_3[] = {print_hello_3()};
    printf(*hel_3);

    char *hel_4[] = {print_hello_4()};
    printf(*hel_4);

    char *hel_5[] = {print_hello_5()};
    printf(*hel_5);

    return 0;
}

// Functions ..
// Welcome message function;
char *welcome_message()
{
    char *wel_mas[] = {("\n\nYou welcome in Hello 5 Times Program ( Version 13 ) ..\n\n")};

    return *wel_mas;
}

// Printing hello_1 function;
char *print_hello_1()
{
    char *hel_1[] = {"Hello 1 \n"};

    return *hel_1;
}
// Printing hello_2 function;
char *print_hello_2()
{
    char *hel_2[] = {("Hello 2\n")};

    return *hel_2;
}
// Printing hello_3 function;
char *print_hello_3()
{
    char *hel_3[] = {("Hello 3\n")};

    return *hel_3;
}
// Printing hello_4 function;
char *print_hello_4()
{

    char *hel_4[] = {("Hello 4\n")};

    return *hel_4;
}
// Printing hello_5 function;
char *print_hello_5()
{
    char *hel_5[] = {("Hello 5\n\n\n")};

    return *hel_5;
}