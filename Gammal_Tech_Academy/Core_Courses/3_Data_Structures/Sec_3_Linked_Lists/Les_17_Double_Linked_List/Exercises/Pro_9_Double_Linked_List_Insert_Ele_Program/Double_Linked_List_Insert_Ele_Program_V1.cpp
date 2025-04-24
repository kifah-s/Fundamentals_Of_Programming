
//* Double Linked List Insert Element Program (Version 1).

/*
* Write a program to insert an element at a specific position in a double linked list.

! Input:
! Please, enter the number of elements: 5
! Please, enter element: 2
! Please, enter element: 3
! Please, enter element: 4
! Please, enter element: 5
! Please, enter element: 6

! Please, enter postion to insert at: 3
! Please, enter new element: 1

! Output:
! Double linked list befor insertion: 2 <-> 3 <-> 4 <-> 5 <-> 6 <-> NULL
! Double linked list after insertion: 2 <-> 3 <-> 4 <-> 1 <-> 5 <-> 6 <-> NULL
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

//* Struct ..

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

//* End Struct ..

//* Functions ..

// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Double Linked List Insert Element Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Elemets - Function.
int getNumberOfElemetsFun()
{
    int numOfEle = 0;
    cout << "Please, enter number of elements: ";
    cin >> numOfEle;

    return numOfEle;
}

// Create Node - Function.
Node *createNodeFun(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));

    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}

// Insert End - Function.
Node *insertEndFun(Node *head, int data)
{
    if (head == NULL)
    {
        return createNodeFun(data);
    }

    head->next = insertEndFun(head->next, data);

    Node *temp = head->next;
    temp->prev = head;

    return head;
}

// Print List - Recursion Function.
void printListRecFun(Node *head)
{
    if (head == NULL)
    {
        cout << "NULL" << endl;
        return;
    }
    else
    {
        cout << head->data << " <-> ";
        printListRecFun(head->next);
    }
}

Node *insertElementFun(Node *head, int postion, int data)
{
    if (postion < 0)
    {
        cout << "Invalid postion." << endl;
        return head;
    }

    if (postion == 0 || head == NULL)
    {
        Node *newNode = createNodeFun(data);

        newNode->next = head;

        if (head != NULL)
        {
            head->prev = newNode;
        }

        return newNode;
    }

    head->next = insertElementFun(head->next, postion - 1, data);

    if (head->next != NULL)
    {
        head->next->prev = head;
    }

    return head;
}

// Free Allocated Memory - Function.
void freeAllocatedMemoryFun(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *nextNode = temp->next; // Save Next Node Before Freeing.
        free(temp);                  // Free Current Node.
        temp = nextNode;             // Move To Next Node.
    }
    cout << "\n----------------------------" << endl;
    cout << "Memory freed successfully!" << endl;
    cout << "----------------------------" << endl;
}

// Result - Function.
void resultFun()
{
    // Declare Pointers And Variables.
    Node *head = NULL;
    int numberOfElements = 0, value = 0, postion = 0, newData = 0;

    // Call Functions.
    printWelcomeMessageFun();

    numberOfElements = getNumberOfElemetsFun();

    cout << "Please, enter elements:" << endl;
    for (int i = 0; i < numberOfElements; i++)
    {
        cout << "element " << i + 1 << ": ";
        cin >> value;

        head = insertEndFun(head, value);
    }

    cout << "\nPlease, enter postion to insert at: ";
    cin >> postion;

    cout << "Please, enter new element: ";
    cin >> newData;

    cout << "\nDouble linked list befor insertion: ";
    printListRecFun(head);

    head = insertElementFun(head, postion, newData);

    cout << "\nDouble linked list after insertion: ";
    printListRecFun(head);

    freeAllocatedMemoryFun(head);

    cout << endl
         << endl;
}
//* End Function ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
