
//* Linked List Add Person Program (Version 1).

/*
* Write a program to add a person with a payment of 100 and the name "John" to the linked list. Print the updated linked list.

! InPut & Output:
! ----------------------------
! 1) Add
! 2) Show
! 3) Exit
! Please, enter your choice: 1
! ----------------------------

! Please, enter a name: John
! Please, enter a payment: 100

! ----------------------------
! 1) Add
! 2) Show
! 3) Exit
! Please, enter your choice: 2
! ----------------------------

! Name: john
! payment: 100
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
#include <cstring>

using namespace std;

//* Struct ..

struct Node
{
    char name[25];
    int payment;
    struct Node *next;
};

//* End Struct ..

//* Functions ..

// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Linked List Add Person Program (Version 1) ..\n"
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
         << "3) Exit" << endl
         << "Please, enter your choice: ";
    cin >> answer;
    cout << "----------------------------\n"
         << endl;

    return answer;
}

// Add Nodes - Function.
void addNodesFun(Node *head)
{
    char name[25];
    int payment = 0;

    cout << "Please, enter the name: ";
    cin >> name;
    cout << "Please, enter the payment: ";
    cin >> payment;

    Node *temp = head;
    if (temp->payment == -1)
    {
        temp->payment = payment;
        strcpy(temp->name, name);
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
        temp->next = NULL;
        temp->payment = payment;
        strcpy(temp->name, name);
    }
}

// Show Nodes - Function.
void showNodesFun(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << "--------------------" << endl;
        cout << "Name: " << temp->name << endl;
        cout << "Payment: " << temp->payment << endl;
        cout << "--------------------" << endl;
        temp = temp->next;
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

        default:
            break;
        }

    } while (answer != 3);

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
    head->payment = -1;

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
