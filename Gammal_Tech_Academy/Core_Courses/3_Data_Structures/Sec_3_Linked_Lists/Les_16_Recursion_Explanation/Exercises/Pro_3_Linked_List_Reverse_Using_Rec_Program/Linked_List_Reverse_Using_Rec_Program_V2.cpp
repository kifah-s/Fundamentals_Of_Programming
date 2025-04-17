
//* Linked List Reverse Using Recursion Program (Version 2).

/*
* Write a program to reverse and print the linked list using recursion.

! Input:
! Please, enter a number (That number represents the number of numbers in the linked list): 4
! Enter number: 1
! Enter number: 3
! Enter number: 3
! Enter number: 4

! Output:
! Reversed Liked List: 4 3 2 1
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
    int number;
    Node *next;
};

//* End Struct ..

//* Functions ..

// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Linked List Reverse Using Recursion Program (Version 2) ..\n"
         << endl;
}

// Get Number Of Numbers In Linked List - Function.
int getNumberOfNumbersInLinkedListFun()
{
    int num = 0;
    cout << "Please, enter a number (That number represents the number of numbers in the linked list): ";
    cin >> num;

    return num;
}

// Add Nodes - Function.
Node *addNodesFun(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        temp = (Node *)malloc(sizeof(Node));

        cout << "Please, enter number: ";
        cin >> temp->number;

        temp->next = NULL;

        return temp;
    }

    temp->next = addNodesFun(temp->next);

    return temp;
}

// Reverse And Print Linked List - Function.
void reverseAndPrintLinkedListFun(Node *&head)
{
    // Reverse Linked List.
    // Node *temp, *next, *prev;
    // prev = NULL;
    // temp = head;
    // while (temp != NULL)
    // {
    //     next = temp->next;
    //     temp->next = prev;
    //     prev = temp;
    //     temp = next;
    // }
    // head = prev;

    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    reverseAndPrintLinkedListFun(temp->next);
    cout << temp->number << " ";
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
    cout << "----------------------------" << endl;
    cout << "Memory freed successfully!" << endl;
    cout << "----------------------------" << endl;
}

// Result - Function.
void resultFun()
{
    // Declare Variables and Pointer.
    Node *head = NULL;
    int NumberOfNumbersInLinkedList = 0;

    // Call Functions.
    printWelcomeMessageFun();
    NumberOfNumbersInLinkedList = getNumberOfNumbersInLinkedListFun();
    for (int i = 0; i < NumberOfNumbersInLinkedList; i++)
    {
        head = addNodesFun(head);
    }

    cout << "\n--------------------" << endl;
    cout << "Reversed Liked List: ";
    reverseAndPrintLinkedListFun(head);
    cout << "\n--------------------" << endl;
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
