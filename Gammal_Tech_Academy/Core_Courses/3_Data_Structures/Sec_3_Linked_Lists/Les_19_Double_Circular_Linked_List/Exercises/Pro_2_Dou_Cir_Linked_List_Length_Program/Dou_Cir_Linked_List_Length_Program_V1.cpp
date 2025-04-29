
//* Dou Cir Linked List Length Program (Version 1).

/*
* Create a Double Circular Linked List and add nodes to it and Find the length of the doubly linked list.

! Input & Output:
! 1) Add
! 2) Show
! 3) Reverse Show
! 4) Calculate Length
! 5) Exit
! Please, enter your choice: 1
! Please, enter a number: 1

! 1) Add
! 2) Show
! 3) Reverse Show
! 4) Calculate Length
! 5) Exit
! Please, enter your choice: 1
! Please, enter a number: 2

! 1) Add
! 2) Show
! 3) Reverse Show
! 4) Calculate Length
! 5) Exit
! Please, enter your choice: 1
! Please, enter a number: 3

! 1) Add
! 2) Show
! 3) Reverse Show
! 4) Calculate Length
! 5) Exit
! Please, enter your choice: 4
! Length of Double Circular Linked List: 3
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
    Node *next, *prev;
};

//* End Struct ..

//* Functions ..

// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Dou Cir Linked List Length Program (Version 1) ..\n"
         << endl;
}

// Display Menu - Function.
int displayMenuFun()
{
    int answer = 0;

    cout << "\n----------------------------" << endl;
    cout << "1) Add" << endl
         << "2) Show" << endl
         << "3) Reverse Show" << endl
         << "4) Calculate Length" << endl
         << "5) Exit" << endl
         << "Please, enter your choice: ";
    cin >> answer;
    cout << "----------------------------\n"
         << endl;

    return answer;
}

// Add Nodes - Function.
Node *addNodesFun(Node *head, Node *headTemporary)
{
    if (headTemporary == NULL || head->next == headTemporary)
    {
        Node *temp = (Node *)malloc(sizeof(Node));

        cout << "Please, enter a number: ";
        cin >> temp->number;

        if (headTemporary == NULL)
        {
            temp->next = temp;
            temp->prev = temp;
            return temp;
        }

        temp->next = headTemporary;
        headTemporary->prev = temp;
        head->next = temp;
        temp->prev = head;
        return head;
    }

    head->next = addNodesFun(head->next, headTemporary);

    return head;
}

// Show Nodes - Function.
void showNodesFun(Node *head)
{
    if (head == NULL)
    {
        cout << "Double Circular Linked List Is Empty." << endl;
        return;
    }

    Node *headTemporary = head;
    cout << "Double Circular Linked List: ";
    do
    {
        cout << head->number << " ";
        head = head->next;
    } while (head != headTemporary);

    cout << endl;
}

// Reverse Show Nodes - Function.
void reverseShowNodesFun(Node *head)
{
    if (head == NULL)
    {
        cout << "Double Circular Linked List Is Empty." << endl;
        return;
    }

    Node *headTemporary = head;
    cout << "Reverse Double Circular Linked List: ";
    do
    {
        cout << head->number << " ";
        head = head->prev;
    } while (head != headTemporary);

    cout << endl;
}

// Calculate Length - Function.
void calculateLengthFun(Node *head)
{
    if (head == NULL)
    {
        cout << "Double Circular Linked List Is Empty." << endl;
        return;
    }

    Node *headTemporary = head;
    int length = 0;
    do
    {
        length++;
        head = head->next;
    } while (head != headTemporary);

    cout << "Length of Double Circular Linked List: " << length << endl;
}

// Free Allocated Memory - Function.
void freeAllocatedMemoryFun(Node *head)
{
    Node *headTemporary = head;

    while (head != headTemporary)
    {
        Node *nextNode = head->next; // Save Next Node Before Freeing.
        free(head);                  // Free Current Node.
        head = nextNode;             // Move To Next Node.
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
            head = addNodesFun(head, head);
            break;

        case 2:
            showNodesFun(head);
            break;

        case 3:
            reverseShowNodesFun(head);
            break;

        case 4:
            calculateLengthFun(head);
            break;

        default:
            break;
        }

    } while (answer != 5);

    freeAllocatedMemoryFun(head);
}

// Result - Function.
void resultFun()
{
    // Declare Pointers And Variables.
    Node *head = NULL;

    // Call Functions.
    printWelcomeMessageFun();
    handlingUserChoiceFun(head);

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
