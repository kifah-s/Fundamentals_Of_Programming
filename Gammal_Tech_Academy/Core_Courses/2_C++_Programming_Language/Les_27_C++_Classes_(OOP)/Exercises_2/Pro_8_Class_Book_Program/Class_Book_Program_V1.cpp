
//* Class Book Program (Version 1).

/*
* Create a program with a class Book that has private members title, author, and price.
* Implement public methods setBookDetails to set book details and displayBookInfo to display book information.

! Output:
! Title: learn c++
! Author: kifah saloum
! Price: 100$
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
    int price;
    string title, author;

public:
    void setTitle(string tit)
    {
        title = tit;
    }

    void setAuthor(string aut)
    {
        author = aut;
    }

    void setPrice(int pri)
    {
        price = pri;
    }

    void getBookDetails()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << " $" << endl;
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
    Book b1;
    b1.setAuthor("kifah saloum");
    b1.setPrice(100);
    b1.setTitle("Learn c++");
    b1.getBookDetails();
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
