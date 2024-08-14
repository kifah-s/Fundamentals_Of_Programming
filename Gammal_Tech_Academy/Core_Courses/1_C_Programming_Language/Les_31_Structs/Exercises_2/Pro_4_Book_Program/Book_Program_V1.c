

//* Book Program (Version 1).

/*
 * Write a program using a struct to represent a book with members title and author,
 * Create an instance of the struct, initialize its members, and print the book information.
 */

/*
! Output:
! Title: Hello world
! Author: kifah
*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Book
{
    char title[25];
    char author[25];
};
//* End Struct

void welcomeMessageFun();
void bookDetailsFun(struct Book b);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Book book1;

    strcpy(book1.title, "Hello World");
    strcpy(book1.author, "kifah");

    // Calling Functions.
    bookDetailsFun(book1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Book Program (Version 1) ..\n\n");
}

// Print Person Details - Function.
void bookDetailsFun(struct Book b)
{
    printf("Title: %s", b.title);
    printf("\nAuthor: %s", b.author);
}

//* End Function ..
