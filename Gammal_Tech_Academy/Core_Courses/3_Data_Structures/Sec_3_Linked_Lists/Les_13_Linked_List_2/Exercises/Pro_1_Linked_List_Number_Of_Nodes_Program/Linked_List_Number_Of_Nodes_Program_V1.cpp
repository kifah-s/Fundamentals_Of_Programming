
//* Linked List Number Of Nodes Program (Version 1).

/*
* Write a program that counts the number of nodes in a linked list.

! InPut & Output:
! ----------------------------
! 1) Add
! 2) Show
! 3) Count nodes
! 4) Exit
! Please, enter your choice: 1
! ----------------------------

! Please, enter a number: 2

! ----------------------------
! 1) Add
! 2) Show
! 3) Count nodes
! 4) Exit
! Please, enter your choice: 1
! ----------------------------

! Please, enter a number: 3

! ----------------------------
! 1) Add
! 2) Show
! 3) Count nodes
! 4) Exit
! Please, enter your choice: 1
! ----------------------------

! Please, enter a number: 4

! ----------------------------
! 1) Add
! 2) Show
! 3) Count nodes
! 4) Exit
! Please, enter your choice: 4
! ----------------------------
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
    struct Node *next;
};

//* End Struct ..

//* Functions ..

// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Linked List Number Of Nodes Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
// void dynamicMemoryAllocationFun(Node *&head)
// {
//     // HEAD.
//     head = (Node *)malloc(sizeof(Node));
//     // Check if memory allocation succeeded.
//     if (head == nullptr)
//     {
//         cout << "Memory allocation failed for NODE 1 (HEAD)." << endl;
//         return; // Exit if allocation was unsuccessful.
//     }
//     else
//     {
//         cout << "Memory allocation success for NODE 1 (HEAD)." << endl;
//     }
//     // NODE 2.
//     head->next = (Node *)malloc(sizeof(Node));
//     // Check if memory allocation succeeded.
//     if (head->next == nullptr)
//     {
//         cout << "Memory allocation failed for NODE 2." << endl;
//         free(head); // Free First Node.
//         return;     // Exit If Allocation Was Unsuccessful.
//     }
//     else
//     {
//         cout << "Memory allocation success for NODE 2." << endl;
//     }
//     // NODE 3.
//     head->next->next = (Node *)malloc(sizeof(Node));
//     // Check if memory allocation succeeded.
//     if (head->next->next == nullptr)
//     {
//         cout << "Memory allocation failed for NODE 3." << endl;
//         free(head->next); // Free Second Node.
//         free(head);       // Free First Node.
//         return;           // Exit If Allocation Was Unsuccessful.
//     }
//     else
//     {
//         cout << "Memory allocation success for NODE 3." << endl;
//     }
//     // NODE 4.
//     head->next->next->next = (Node *)malloc(sizeof(Node));
//     // Check if memory allocation succeeded.
//     if (head->next->next == nullptr)
//     {
//         cout << "Memory allocation failed for NODE 4." << endl;
//         free(head->next->next); // Free Third Node.
//         free(head->next);       // Free Second Node.
//         free(head);             // Free First Node.
//         return;                 // Exit If Allocation Was Unsuccessful.
//     }
//     else
//     {
//         cout << "Memory allocation success for NODE 4." << endl;
//     }
//     cout << endl;
//     // NODE 5.
//     head->next->next->next->next = NULL;
// }

// Display Menu - Function.
int displayMenuFun()
{
    int answer = 0;

    cout << "\n----------------------------" << endl;
    cout << "1) Add" << endl
         << "2) Show" << endl
         << "3) Count Nodes" << endl
         << "4) Exit" << endl
         << "Please, enter your choice: ";
    cin >> answer;
    cout << "----------------------------\n"
         << endl;

    return answer;
}

// Add Nodes - Function.
void addNodesFun(Node *head)
{
    int number = 0;

    cout << "Please, enter a number: ";
    cin >> number;

    Node *temp = head;
    if (temp->number == -1)
    {
        temp->number = number;
        temp->next = NULL;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = (Node *)malloc(sizeof(Node));
        temp = temp->next;
        temp->number = number;
        temp->next = NULL;
    }
}

// Show Nodes - Function.
void showNodesFun(Node *head)
{
    int counter = 1;
    cout << "Nodes: " << endl;
    cout << "----------------------------" << endl;

    Node *temp = head;
    while (temp != NULL)
    {
        cout << "Node " << counter << " -> " << " Number: " << temp->number << endl;
        counter++;
        temp = temp->next;
    }
}

// Count Nodes - Function.
void countNodesFun(Node *head)
{
    int counter = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        counter++;
        temp = temp->next;
    }
    cout << "----------------------------" << endl;
    cout << "Number of nodes: " << counter << endl;
    cout << "----------------------------" << endl;
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

// Handling User Choice - Function.
void handlingUserChoiceFun(Node *head)
{
    int answer = 0;

    do
    {
        answer = displayMenuFun();

        if (answer == 1)
        {
            addNodesFun(head);
        }
        else if (answer == 2)
        {
            showNodesFun(head);
        }
        else if (answer == 3)
        {
            countNodesFun(head);
        }

    } while (answer != 4);

    freeAllocatedMemoryFun(head);
}

// Result - Function.
int resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pointers And Variables.
    Node *head;
    head = (Node *)malloc(sizeof(Node));
    head->number = -1;

    handlingUserChoiceFun(head);

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
