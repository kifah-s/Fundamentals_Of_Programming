
//* Double Circular Linked List Sum Even Program (Version 1).

/*
* Write a program to find the sum of even numbers in a Double Circular Linked List.

! Input & Output:
! 1) Add
! 2) Show
! 3) Sum Even Number
! 4) Exit
! Please, enter your choice: 1
! Please, enter a number: 1

! 1) Add
! 2) Show
! 3) Sum Even Number
! 4) Exit
! Please, enter your choice: 1
! Please, enter a number: 2

! 1) Add
! 2) Show
! 3) Sum Even Number
! 4) Exit
! Please, enter your choice: 1
! Please, enter a number: 3

! 1) Add
! 2) Show
! 3) Sum Even Number
! 4) Exit
! Please, enter your choice: 3
! Sum Even Numbers: 2
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
    cout << "\n\nYou welcome in Double Circular Linked List Sum Even Program (Version 1) ..\n"
         << endl;
}

// Display Menu - Function.
int displayMenuFun()
{
    int answer = 0;

    cout << "\n----------------------------" << endl;
    cout << "1) Add" << endl
         << "2) Show" << endl
         << "3) Sum Even Number" << endl
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
            temp->prev = temp;
            return temp;
        }

        temp->next = current;
        current->prev = temp;
        head->next = temp;
        temp->prev = head;
        return head;
    }

    head->next = addNodesFun(head->next, current);

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

    Node *current = head;
    cout << "Double Circular Linked List: ";
    do
    {
        cout << head->number << " ";
        head = head->next;
    } while (head != current);

    cout << endl;
}

// Sum Even Number - Function.
void sumEvenNumberFun(Node *head)
{
    if (head == NULL)
    {
        cout << "Double Circular Linked List Is Empty." << endl;
        return;
    }

    Node *current = head;
    int sum = 0;

    do
    {
        if (current->number % 2 == 0)
        {
            sum += current->number;
        }

        current = current->next;
        // current = current->prev;
    } while (current != head);

    cout << "Sum Even Number: " << sum << endl;
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
            sumEvenNumberFun(head);
            break;

        default:
            break;
        }

    } while (answer != 4);

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
