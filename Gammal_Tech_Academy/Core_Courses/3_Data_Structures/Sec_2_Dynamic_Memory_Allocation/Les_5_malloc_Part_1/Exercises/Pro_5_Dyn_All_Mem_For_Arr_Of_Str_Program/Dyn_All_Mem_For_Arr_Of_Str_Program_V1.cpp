
//* Dynamically Allocates Memory For Array Of Structures Program (Version 1).

/*
* Write a program that dynamically allocates memory for an array of two structures (representing books),
* takes user input for each book, and displays the information.

! Input:
! Please, enter title for book 1: Programming
! Please, enter number of pages for book 1: 300

! Please, enter title for book 2: Algorithm
! Please, enter number of pages for book 2: 250

! Output:
! Books Information:
! Book 1:
! Title: Programming
! Pages: 300

! Book 2:
! Title: Algorithm
! Pages: 250
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>
#include <stdlib.h>

using namespace std;

//* Structs ..
struct Book
{
    char title[50];
    int pages;
};
//* End Structs ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Array Of Structures Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
Book *dynamicMemoryAllocationFun(Book *books, int s)
{
    books = (Book *)malloc(s * sizeof(Book));
    return books;
}

// Check Memory Allocation - Function.
int checkMemoryAllocationFun(Book *books)
{
    if (books == nullptr)
    {
        cout << "Memory allocation failed." << endl;
        return 1; // Exit if allocation was unsuccessful.
    }
    return 0;
}

// Initialize Array Of Structs - Function.
void initializeArrayOfStructsFun(Book *books, int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << "Please, enter title for book " << i + 1 << ": ";
        cin >> books[i].title;
        cout << "Please, enter number of pages for book " << i + 1 << ": ";
        cin >> books[i].pages;
    }
}

// Print Structs Informations - Function.
void printStructsInformationsFun(Book *books, int s)
{
    cout << "\nBooks Informations: " << endl;
    for (int i = 0; i < s; i++)
    {
        cout << "Book " << i + 1 << ": " << endl;
        cout << "Title: " << books[i].title << endl;
        cout << "Pages: " << books[i].pages << endl
             << endl;
    }
}

// Freeing Memory - Function.
void freeingMemoryFun(Book *books)
{
    free(books);
}

// Result - Function.
int resultFun()
{
    // Declare Pointer and Variables.
    Book *books;
    int size = 2;

    // Call Functions.
    printWelcomeMessageFun();

    books = dynamicMemoryAllocationFun(books, size);
    checkMemoryAllocationFun(books);
    initializeArrayOfStructsFun(books, size);
    printStructsInformationsFun(books, size);
    freeingMemoryFun(books);

    cout << endl
         << endl;

    return 0;
}
//* End Function ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
