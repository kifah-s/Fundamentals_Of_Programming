
//* Linked List Fore Nodes Program (Version 3).

/*
* Write a program to add a node with data value 8 at the end of the linked list created in the previous program.
* Print the updated linked list.

! Output:
! 2 4 6 8
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
    struct Node *next;
};

//* End Struct ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Linked List Fore Nodes Program (Version 3) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
void dynamicMemoryAllocationFun(Node *&head)
{
    // HEAD.
    head = (Node *)malloc(sizeof(Node));
    // Check if memory allocation succeeded.
    if (head == nullptr)
    {
        cout << "Memory allocation failed for NODE 1 (HEAD)." << endl;
        return; // Exit if allocation was unsuccessful.
    }
    else
    {
        cout << "Memory allocation success for NODE 1 (HEAD)." << endl;
    }

    // NODE 2.
    head->next = (Node *)malloc(sizeof(Node));
    // Check if memory allocation succeeded.
    if (head->next == nullptr)
    {
        cout << "Memory allocation failed for NODE 2." << endl;
        free(head); // Free First Node.
        return;     // Exit If Allocation Was Unsuccessful.
    }
    else
    {
        cout << "Memory allocation success for NODE 2." << endl;
    }

    // NODE 3.
    head->next->next = (Node *)malloc(sizeof(Node));
    // Check if memory allocation succeeded.
    if (head->next->next == nullptr)
    {
        cout << "Memory allocation failed for NODE 3." << endl;
        free(head->next); // Free Second Node.
        free(head);       // Free First Node.
        return;           // Exit If Allocation Was Unsuccessful.
    }
    else
    {
        cout << "Memory allocation success for NODE 3." << endl;
    }

    // NODE 4.
    head->next->next->next = (Node *)malloc(sizeof(Node));
    // Check if memory allocation succeeded.
    if (head->next->next == nullptr)
    {
        cout << "Memory allocation failed for NODE 4." << endl;
        free(head->next->next); // Free Third Node.
        free(head->next);       // Free Second Node.
        free(head);             // Free First Node.
        return;                 // Exit If Allocation Was Unsuccessful.
    }
    else
    {
        cout << "Memory allocation success for NODE 4." << endl;
    }

    // NODE 5.
    head->next->next->next->next = NULL;
}

// Initialize Linked List - Function.
void initializeLinkedListFun(Node *head)
{
    head->data = 2;
    head->next->data = 4;
    head->next->next->data = 6;
    head->next->next->next->data = 8;
}

// Print Linked List - Function.
void printLinkedListFun(Node *head, Node *temp)
{
    int count = 1;
    temp = head;
    while (temp != NULL)
    {
        cout << "\nValue in Node " << count << ": " << temp->data;
        temp = temp->next;
        count++;
    }
    cout << endl;
}

// Free Allocated Memory - Function.
void freeAllocatedMemoryFun(Node *head, Node *temp)
{
    temp = head;
    while (temp != NULL)
    {
        Node *nextNode = temp->next; // Save Next Node Before Freeing.
        free(temp);                  // Free Current Node.
        temp = nextNode;             // Move To Next Node.
    }
    cout << "\nMemory freed successfully!" << endl;
}

// Result - Function.
int resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pointers And Variables.
    Node *head, *temporary;

    dynamicMemoryAllocationFun(head);
    initializeLinkedListFun(head);
    printLinkedListFun(head, temporary);
    freeAllocatedMemoryFun(head, temporary);

    cout << endl
         << endl;

    return 0;
}
//* End Function ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
