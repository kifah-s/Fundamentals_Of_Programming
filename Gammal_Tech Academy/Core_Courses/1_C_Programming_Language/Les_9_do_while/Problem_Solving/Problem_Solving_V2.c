

/* >>> Problem Solving ( Version 2 ) <<< */

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

int main()
{
    printf("\n\nYou welcome in Problem Solving ( Version 2 ) ..\n\n");

    int password, pass_1 = 1111, pass_2 = 2222, pass_3 = 3333, i = 1;

    printf("Please enter a password : ");
    scanf("%d", &password);

    if (password == pass_1 || password == pass_2 || password == pass_3)
    {
        printf("\n\' Correct \'");
    }
    else
    {
        do
        {
            i++;
            printf("\n\'  InCorrect \'");
            printf("\n\nPlease enter a password : ");
            scanf("%d", &password);
        } while (i < 5 && password != pass_1 && password != pass_2 && password != pass_3);

        printf("\n\" Please Try again after 5 minutes \"");
    }

    printf("\n\n\n");

    return 0;
}