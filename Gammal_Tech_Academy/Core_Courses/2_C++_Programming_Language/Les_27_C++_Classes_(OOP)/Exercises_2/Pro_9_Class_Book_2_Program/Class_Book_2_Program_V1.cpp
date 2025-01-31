
//* Class Book 2 Program (Version 1).

/*
* Extend the previous program to add a public method discount that applies a 10% discount to the book price and updates the price.

! Output:
! Title: learn c++
! Author: kifah saloum
! Price: 100$
! Discount Applied 10%, New Price = 90 $
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
    float price, discount = 0.1, newPrice;
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

    void setPrice(float pri)
    {
        price = pri;
    }

    void setNewPrice()
    {
        discount = discount * price;
        newPrice = price - discount;
    }

    void getBookDetails()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << " $" << endl;
        cout << "Discount: " << discount << " %, New Price: " << newPrice << " $" << endl;
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
    Book b1;
    b1.setAuthor("kifah saloum");
    b1.setPrice(100);
    b1.setTitle("Learn c++");
    b1.setNewPrice();
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
