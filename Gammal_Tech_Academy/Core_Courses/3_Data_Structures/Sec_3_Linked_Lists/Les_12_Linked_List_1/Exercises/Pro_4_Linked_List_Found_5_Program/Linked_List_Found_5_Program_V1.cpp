
//* Linked List Found 5 Program (Version 1).

/*
* Write a program to check if the linked list contains a node with data value 5.
* Print "Found" if it exists, otherwise print "Not Found".

! Output:
! Not Found Number 5.
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
    cout << "\n\nYou welcome in Linked List Found 5 Program (Version 1) ..\n"
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

// Initialize Liked List - Function.
void initializeLikedListFun(Node *head)
{
    head->data = 2;
    head->next->data = 4;
    head->next->next->data = 6;
    head->next->next->next->data = 8;
}

// Print Linked List - Function.
void printLinkedListFun(Node *head)
{
    int count = 1;

    Node *temp = head;
    while (temp != NULL)
    {
        cout << "\nValue in Node " << count << ": " << temp->data;
        temp = temp->next;
        count++;
    }
    cout << endl;
}

// Print Linked List Length - Function.
void printLinkedListLengthFun(Node *head)
{
    int length = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }

    cout << "\nLength of linked list is: " << length << endl;
}

// Found Number 5 - Function.
void foundNumber5Fun(Node *head)
{
    int number = 5;
    bool found = false;
    
    Node* temp = head;
    while (temp != NULL)
    {
        if (temp->data == number)
        {
            found = true;
            break;
        }

        temp = temp->next;
    }

    if (found)
    {
        cout << "\nFound Number " << number << endl;
    }
    else
    {
        cout << "\nNot Found Number " << number << endl;
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
    cout << "\nMemory freed successfully!" << endl;
}

// Result - Function.
int resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pointers And Variables.
    Node *head;

    dynamicMemoryAllocationFun(head);
    initializeLikedListFun(head);
    printLinkedListFun(head);
    printLinkedListLengthFun(head);
    foundNumber5Fun(head);
    freeAllocatedMemoryFun(head);

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
