
//* Linked List Count Even Numbers Program (Version 1).

/*
* Write a program that counts the number of nodes containing Even numbers in a linked list.

! InPut & Output:
! ----------------------------
! 1) Add
! 2) Show
! 3) Count nodes
! 4) Count Odd Numbers
! 5) Count Even Numbers
! 6) Exit
! Please, enter your choice: 1
! ----------------------------

! Please, enter a number: 2

! ----------------------------
! 1) Add
! 2) Show
! 3) Count nodes
! 4) Count Odd Numbers
! 5) Count Even Numbers
! 6) Exit
! Please, enter your choice: 1
! ----------------------------

! Please, enter a number: 5

! ----------------------------
! 1) Add
! 2) Show
! 3) Count nodes
! 4) Count Odd Numbers
! 5) Count Even Numbers
! 6) Exit
! Please, enter your choice: 1
! ----------------------------

! Please, enter a number: 6

! ----------------------------
! 1) Add
! 2) Show
! 3) Count nodes
! 4) Count Odd Numbers
! 5) Count Even Numbers
! 6) Exit
! Please, enter your choice: 5
! ----------------------------

! ----------------------------
! Even numbers in all nodes is: 2
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
    cout << "\n\nYou welcome in Linked List Count Even Numbers Program (Version 1) ..\n"
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
         << "4) Count Odd Numbers" << endl
         << "5) Count Even Numbers" << endl
         << "6) Exit" << endl
         << "Please, enter your choice: ";
    cin >> answer;
    cout << "----------------------------\n"
         << endl;

    return answer;
}

// Get Number - Function.
int getNumberFun()
{
    int num = 0;
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Add Nodes - Function.
void addNodesFun(Node *head)
{
    int number = getNumberFun();

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
    cout << "----------------------------" << endl;
    cout << "Nodes: " << endl;

    Node *temp = head;
    while (temp != NULL)
    {
        cout << "Node " << counter << " -> " << " Number: " << temp->number << endl;
        counter++;
        temp = temp->next;
    }
    cout << "----------------------------" << endl;
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

// Count Odd Numbers - Function.
void countOddNumbersFun(Node *head)
{
    int counter = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->number % 2 != 0)
        {
            counter++;
        }

        temp = temp->next;
    }
    cout << "----------------------------" << endl;
    cout << "Odd numbers in all nodes is: " << counter << endl;
    cout << "----------------------------" << endl;
}

// Count Even Numbers - Function.
void countEvenNumbersFun(Node *head)
{
    int counter = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->number % 2 == 0)
        {
            counter++;
        }

        temp = temp->next;
    }
    cout << "----------------------------" << endl;
    cout << "Even numbers in all nodes is: " << counter << endl;
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

        switch (answer)
        {
        case 1:
            addNodesFun(head);
            break;

        case 2:
            showNodesFun(head);
            break;

        case 3:
            countNodesFun(head);
            break;

        case 4:
            countOddNumbersFun(head);
            break;

        case 5:
            countEvenNumbersFun(head);
            break;

        default:
            break;
        }

    } while (answer != 6);

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
