
//* Class Book Program (Version 1).

/*
* Create a program with a class Book that has private members title, author, and publicationYear.
* Implement public methods setDetails to set book details and displayInfo to display the book information.

! Input:
! Please, enter Book Title: learn c++
! Please, enter Author Name: kifah saloum
! Please, enter Publication Year: 1996

! Output:
! Book Title: learn c++
! Author Name: kifah saloum
! Publication Year: 1996
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
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Book Program (Version 1) ..\n"
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
