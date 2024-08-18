

//* Book Program (Version 1).

/*
 * Create a program using a struct named Book to represent information about a book,
 * including its title and number of pages,
 * Initialize an array of 2 Book structures with some data and print their details.
 */

/*
! Output:
! Book 1:
! Title: Introduction to C
! Pages: 500

! Book 2:
! Title: Introduction to C++
! Pages: 700
*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Book
{
    char title[25];
    int pages;
};
//* End Struct

void welcomeMessageFun();
void bookDetailsFun(struct Book books[2]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Book books[2] = {{"Introduction to C", 500},
                            {"Introduction to C++", 700}};
    // Calling Functions.
    bookDetailsFun(books);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Book Program (Version 1) ..\n\n");
}

//  Book Details - Function.
void bookDetailsFun(struct Book books[2])
{
    for (int i = 0; i < 2; i++)
    {
        printf("\nBook %d:\n", i + 1);

        printf("Title: %s\n", books[i].title);
        printf("Pages: %d\n", books[i].pages);
    }
}
//* End Function ..
