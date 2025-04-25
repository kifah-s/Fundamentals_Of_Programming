
//* Circular Linked List Count Nodes Program (Version 2).

/*
* Write a program Count the number of nodes in the circular linked list and display the count.

! Input & Output:
! 1) Add
! 2) Show
! 3) Count Nodes
! 4) Exit
! Please, enter your choice: 1

! Please, enter a number: 1

! 1) Add
! 2) Show
! 3) Count Nodes
! 4) Exit
! Please, enter your choice: 1

! Please, enter a number: 2

! 1) Add
! 2) Show
! 3) Count Nodes
! 4) Exit
! Please, enter your choice: 1

! Please, enter a number: 3

! 1) Add
! 2) Show
! 3) Count Nodes
! 4) Exit
! Please, enter your choice: 3

! Number of nodes in the circular linked list is: 3
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
    cout << "\n\nYou welcome in Circular Linked List Count Nodes Program (Version 2) ..\n"
         << endl;
}

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
            return temp;
        }

        temp->next = headTemporary;
        head->next = temp;
        return head;
    }

    head->next = addNodesFun(head->next, headTemporary);
    return head;
}

// Show Nodes - Function.
void showNodesFun(Node *head, Node *headTemporary)
{
    cout << "Circular Linked List: ";
    do
    {
        cout << head->number << " ";
        head = head->next;
    } while (head != headTemporary);
    cout << endl;
}

// Count Nodes - Function.
void countNodesFun(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    int counter = 0;
    Node *temp = head;
    do
    {
        counter++;
        temp = temp->next;
    } while (temp != head);

    cout << "Number of nodes in the circular linked list is: " << counter << endl;
}

// Free Allocated Memory - Function.
void freeAllocatedMemoryFun(Node *head, Node *headTemporary)
{
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
            showNodesFun(head, head);
            break;

        case 3:
            countNodesFun(head);
            break;

        default:
            break;
        }

    } while (answer != 4);

    freeAllocatedMemoryFun(head, head);
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
