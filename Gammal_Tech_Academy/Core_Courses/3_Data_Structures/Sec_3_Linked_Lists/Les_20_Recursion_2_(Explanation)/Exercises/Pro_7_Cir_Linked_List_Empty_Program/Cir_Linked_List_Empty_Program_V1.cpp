
//* Circular Linked List Empty Program (Version 1).

/*
* Create a circular linked list Check if a circular linked list is empty.

! Input & Output:
! 1) Add
! 2) Show
! 3) Check if Empty
! 4) Exit
! Please, enter your choice: 3

! Circular Linked List Is Empty.
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
    cout << "\n\nYou welcome in Circular Linked List Empty Program (Version 1) ..\n"
         << endl;
}

// Display Menu - Function.
int displayMenuFun()
{
    int answer = 0;

    cout << "\n----------------------------" << endl;
    cout << "1) Add" << endl
         << "2) Show" << endl
         << "3) Check If Empty" << endl
         << "4) Exit" << endl
         << "Please, enter your choice: ";
    cin >> answer;
    cout << "----------------------------\n"
         << endl;

    return answer;
}

// Add Nodes - Function.
Node *addNodesFun(Node *head, Node *current)
{
    if (current == NULL || head->next == current)
    {
        Node *temp = (Node *)malloc(sizeof(Node));

        cout << "Please, enter a number: ";
        cin >> temp->number;

        if (current == NULL)
        {
            temp->next = temp;
            return temp;
        }

        temp->next = current;
        head->next = temp;
        return head;
    }

    head->next = addNodesFun(head->next, current);
    return head;
}

// Show Nodes - Function.
void showNodesFun(Node *head)
{
    Node *current = head;

    cout << "Circular Linked List: ";
    do
    {
        cout << current->number << " ";
        current = current->next;
    } while (current != head);
    cout << endl;
}

// Check If Empty - Function.
void checkIfEmptyFun(Node *head)
{
    if (head == NULL)
    {
        cout << "Circular Linked List Is Empty." << endl;
    }
    else
    {
        cout << "Circular Linked List Is Not Empty." << endl;
    }
}

// Free Allocated Memory - Function.
void freeAllocatedMemoryFun(Node *head)
{
    Node *current = head;
    while (head != current)
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
            checkIfEmptyFun(head);
            break;

        default:
            break;
        }

    } while (answer != 4);

    freeAllocatedMemoryFun(head);
}

//* End Function ..

int main()
{
    // Declare Pointers And Variables.
    Node *head = NULL;

    // Call Functions.
    printWelcomeMessageFun();
    handlingUserChoiceFun(head);

    cout << endl
         << endl;

    return 0;
}
