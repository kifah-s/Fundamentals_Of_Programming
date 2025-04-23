
//* Double Linked List 5 Program (Version 1).

/*
* Write a program to reverse a double linked list.

! Input:
! Please, enter the number of elements: 4
! Please, enter element: 1
! Please, enter element: 2
! Please, enter element: 3
! Please, enter element: 4

! Output:
! Double linked list befor reversal: 1 <-> 2 <-> 3 <-> 4 <-> NULL.
! Double linked list after reversal: 4 <-> 3 <-> 2 <-> 1 <-> NULL.
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
    cout << "\n\nYou welcome in Double Linked List 5 Program (Version 1) ..\n"
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

// Reverse List - Recursion Function.
Node *reverseListRecFun(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *restReversed = reverseListRecFun(head->next);
    head->next->next = head;
    head->next = NULL;
    return restReversed;
}

// Print Double Linked List - Recursion Function.
void printDoubleLinkedListRecFun(Node *head)
{
    if (head == NULL)
    {
        cout << "NULL" << endl;
        return;
    }
    else
    {
        cout << head->data << " <-> ";
        printDoubleLinkedListRecFun(head->next);
    }
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
    int numberOfElements = 0, value = 0;

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

    cout << "\nDouble linked list befor reversal: ";
    printDoubleLinkedListRecFun(head);
    
    head = reverseListRecFun(head);
    
    cout << "\nDouble linked list after reversal: ";
    printDoubleLinkedListRecFun(head);

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
