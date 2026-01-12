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

    clsDblLinkedList<int>::Node *N;

    N = MyDblLinkedList.GetNode(2);

    cout << "\nNode Value is: " << N->value << endl;

    cout << endl
         << endl;

    return 0;
}