#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask user for input
    string name = get_string("What is your name ? ");
    // Print welcome message
    printf("Hello, %s !\n", name);
}