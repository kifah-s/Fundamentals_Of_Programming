#include <iostream>
#include "Classes/DS/clsDblLinkedList.h"

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Project ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    clsDblLinkedList<int> MyDblLinkedList;

    if (MyDblLinkedList.IsEmpty())
    {
        cout << "\nYes Linked List Is Empty." << endl;
    }
    else
    {
        cout << "\nNo Linked List Is Not Empty." << endl;
    }

    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    MyDblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Content:\n";
    MyDblLinkedList.PrintList();

    cout << "\nNumber of items in the Linked List: " << MyDblLinkedList.Size() << endl;

    if (MyDblLinkedList.IsEmpty())
    {
        cout << "\nYes Linked List Is Empty." << endl;
    }
    else
    {
        cout << "\nNo Linked List Is Not Empty." << endl;
    }

    cout << endl
         << endl;

    return 0;
}