

/* >>> Problem Solving ( Version 4 ) <<< */

/* >>> Problem statement

Ahmed was thinking about implementing a password checker (same as his laptop), but a much simpler program. Because he always forgets his passwords, so he saved 3 passwords on his laptop's password checker.

Ahmed's saved password:

- 1111

- 2222

- 3333

You will be given multiple lines, each line containing an N number (Ahmed's password). Check if the password matches Ahmed's 3 saved passwords, and terminate the program if the password is "Correct".

Input

Each of the following lines will contain the passwords N (1 ≤ N ≤ 10^4 ).

Output

Print "Incorrect" if the password is wrong, otherwise print "Correct". <<< */

#include <stdio.h>

void welcomeMassageFun();
int problemSolvingFun();

int main()
{
    welcomeMassageFun();
    problemSolvingFun();
    
    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Problem Solving ( Version 4 ) ..\n\n");
}

// Problem Solving function;
int problemSolvingFun()
{
    int password, pass_1 = 1111, pass_2 = 2222, pass_3 = 3333;
    do
    {
        printf("Please enter a password : ");
        scanf("%d", &password);
    } while (password != pass_1 && password != pass_2 && password != pass_3);

    printf("\n\' Correct \'");

    printf("\n\n\n");
}