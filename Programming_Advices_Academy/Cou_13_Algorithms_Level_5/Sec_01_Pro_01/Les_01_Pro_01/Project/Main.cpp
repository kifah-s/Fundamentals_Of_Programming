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

    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    MyDblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Content:\n";
    MyDblLinkedList.PrintList();

    clsDblLinkedList<int>::Node *N1 = MyDblLinkedList.Find(2);

    if (N1 != NULL)
    {
        cout << "\nNode with value 2 is Found :-)\n";
    }
    else
    {
        cout << "\nNode Is not found :-(\n";
    }

    MyDblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 after 2:\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.InsertAtEnd(700);
    cout << "\nAfter Inserting 700 at end:\n";
    MyDblLinkedList.PrintList();

    clsDblLinkedList<int>::Node *N2 = MyDblLinkedList.Find(4);
    MyDblLinkedList.DeleteNode(N2);
    cout << "\nAfter Deleting 4:\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.DeleteFirstNode();
    cout << "\nAfter Deleting First Node:\n";
    MyDblLinkedList.PrintList();

    cout << "\nAfter Deleting Last Node:\n";
    MyDblLinkedList.DeleteLastNode();
    MyDblLinkedList.PrintList();

    cout << endl
         << endl;

    return 0;
}