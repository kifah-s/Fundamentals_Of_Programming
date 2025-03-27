
//* Dynamically Allocates Memory For Structures 2 Program (Version 1).

/*
* Create a program that dynamically allocates memory for a structure representing a book with title and page count.
* Initialize the structure and print its contents.

! Output:
! Book: Programming, Page: 500
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
#include <cstring>

using namespace std;

//* Structs ..
struct Book
{
    char title[50];
    int page;
};
//* End Structs ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Structures 2 Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
Book *dynamicMemoryAllocationFun(Book *b_1, int s)
{
    b_1 = (Book *)malloc(s * sizeof(Book));
    return b_1;
}

// Check Memory Allocation - Function.
int checkMemoryAllocationFun(Book *b_1)
{
    if (b_1 == nullptr)
    {
        cout << "Memory allocation failed." << endl;
        return 1; // Exit if allocation was unsuccessful.
    }
    return 0;
}

// Initialize Structs - Function.
Book *initializeStructsFun(Book *b_1, int s)
{
    strcpy(b_1->title, "Programming");
    b_1->page = 500;

    return b_1;
}

// Print Structs Informations - Function.
void printStructsInformationsFun(Book *b_1, int s)
{
    cout << "Book: " << b_1->title << ", Pages: " << b_1->page << endl;
}

// Freeing Memory - Function.
void freeingMemoryFun(Book *b_1)
{
    free(b_1);
}

// Result - Function.
int resultFun()
{
    // Declare Pointer and Variables.
    Book *book_1;
    int size = 1;

    // Call Functions.
    printWelcomeMessageFun();

    book_1 = dynamicMemoryAllocationFun(book_1, size);
    checkMemoryAllocationFun(book_1);
    book_1 = initializeStructsFun(book_1, size);
    printStructsInformationsFun(book_1, size);
    freeingMemoryFun(book_1);

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
