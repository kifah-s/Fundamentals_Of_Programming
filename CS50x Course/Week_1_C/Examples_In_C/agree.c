#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask user for input " answer "
    char agree = get_char("you are agree ? ");

    // check answer agree or not agree
    if(agree == 'y' || agree == 'Y' )
    {
        printf("you are agreed\n");
    }
    else if(agree == 'n' || agree == 'N' )
    {
         printf("you are not agreed\n");
    }
    else
    {
         printf("you are need select answer yes or no\n");
    }
}