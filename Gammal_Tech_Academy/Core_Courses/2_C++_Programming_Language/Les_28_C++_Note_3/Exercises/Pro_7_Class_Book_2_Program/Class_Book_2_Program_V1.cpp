
//* Class Book 2 Program (Version 1).

/*
* Extend the previous program to add a public method isModern that determines if the book is considered modern (published in the last 20 years).

! Input:
! Please, enter Book Title: learn c++
! Please, enter Author Name: kifah saloum
! Please, enter Publication Year: 1996

! Output:
! Book Title: learn c++
! Author Name: kifah saloum
! Publication Year: 1996
! This book is not considered modern.
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

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Classes ..
class Book
{
private:
    string bookTitle, authorName;
    int publicationYear;

public:
    // Setter.
    void setBookTitle()
    {
        cout << "Please, enter Book Title: ";
        getline(cin, bookTitle);
    }

    void setAuthorName()
    {
        cout << "Please, enter Author Name: ";
        getline(cin, authorName);
    }

    void setPublicationYear()
    {
        cout << "Please, enter Publication Year: ";
        cin >> publicationYear;
    }

    // Getter.
    void getBookDetails()
    {
        cout << "\nBook Title: " << bookTitle << endl;
        cout << "Author Name: " << authorName << endl;
        cout << "Publication Year: " << publicationYear << endl;
    }

    void isModern()
    {
        int currentYear = 2025;
        
        if (currentYear - publicationYear > 20)
        {
            cout << "This book is not considered modern.";
        }
        else
        {
            cout << "This book is considered modern.";
        }
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Book 2 Program (Version 1) ..\n"
         << endl;
}

// Print Book Details - Function.
void printBookDetailsFun()
{
    Book book_1;
    book_1.setBookTitle();
    book_1.setAuthorName();
    book_1.setPublicationYear();
    book_1.getBookDetails();
    book_1.isModern();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    printBookDetailsFun();

    cout << "\n"
         << endl;
}
//* End Function ..
