

//* Book 2 Program (Version 1).

/*
 * Create a program that uses a struct named Book to represent information about a book,
 * including its title and the number of pages,
 * Ask the user to input data for three books, then print their details.
 */

/*
! Input:
! Please enter details for book 1:
! Title: struct
! Number of pages: 60

! Please enter details for book 2:
! Title: pointer
! Number of pages: 65

! Please enter details for book 3:
! Title: string
! Number of pages: 50

! Output:
! Details for book 1:
! Title: struct
! Number of pages: 60

! Details for book 2:
! Title: pointer
! Number of pages: 65

! Details for book 3:
! Title: string
! Number of pages: 50

*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Book
{
    char title[25];
    int numberOfPages;
};
//* End Struct

void welcomeMessageFun();
void bookDetailsFun(struct Book b[3]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Book books[3];

    // Calling Functions.
    bookDetailsFun(books);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Book 2 Program (Version 1) ..\n\n");
}

//  Book Details - Function.
void bookDetailsFun(struct Book b[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("\nPlease enter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", b[i].title);

        printf("Number of pages: ");
        scanf("%d", &b[i].numberOfPages);
    }
    // Print Details.
    for (int i = 0; i < 3; i++)
    {
        printf("\nDetails for Book %d:\n", i + 1);

        printf("Title: %s\n", b[i].title);
        printf("Number of pages: %d\n", b[i].numberOfPages);
    }
}
//* End Function ..
