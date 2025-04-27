
//* Circular Linked List Sum Program (Version 1).

/*
* Create a circular linked list with user-specified nodes
* and display the elements and Find the sum of all nodes in a circular linked list.

! Input & Output:
! 1) Add
! 2) Show
! 3) Count Nodes
! 4) Search Element
! 5) Reverse Circular Linked List
! 6) Insert at end
! 7) Sum Nodes
! 8) Exit
! Please, enter your choice: 1

! Please, enter a number: 1

! 1) Add
! 2) Show
! 3) Count Nodes
! 4) Search Element
! 5) Reverse Circular Linked List
! 6) Insert at end
! 7) Sum Nodes
! 8) Exit
! Please, enter your choice: 1

! Please, enter a number: 2

! 1) Add
! 2) Show
! 3) Count Nodes
! 4) Search Element
! 5) Reverse Circular Linked List
! 6) Insert at end
! 7) Sum Nodes
! 8) Exit
! Please, enter your choice: 1

! Please, enter a number: 3

! 1) Add
! 2) Show
! 3) Count Nodes
! 4) Search Element
! 5) Reverse Circular Linked List
! 6) Insert at end
! 7) Sum Nodes
! 8) Exit
! Please, enter your choice: 7

! Sum All Nodes: 6

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
    cout << "\n\nYou welcome in Circular Linked List Sum Program (Version 1) ..\n"
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
         << "4) Search Number" << endl
         << "5) Reverse Circular Linked List" << endl
         << "6) Insert At End" << endl
         << "7) Sum Nodes" << endl
         << "8) Exit" << endl
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
void showNodesFun(Node *head)
{
    Node *headTemporary = head;

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
    Node *headTemporary = head;

    int counter = 0;

    do
    {
        counter++;
        head = head->next;
    } while (head != headTemporary);

    cout << "Number of nodes in the circular linked list is: " << counter << endl;
}

// Search Number - Function.
void searchNumberFun(Node *head)
{
    int number = 0;
    cout << "Please, enter a number to search: ";
    cin >> number;

    Node *temp = head;
    do
    {
        if (temp->number == number)
        {
            cout << "\nNumber " << number << " found in the circular linked list.\n"
                 << endl;
            break;
        }

        temp = temp->next;
    } while (temp != head);
}

// Reverse Circular Linked List - Function.
Node *reverseCircularLinkedListFun(Node *head)
{
    if (head == NULL)
    {
        cout << "List is Empty" << endl;
        return NULL;
    }

    Node *current = head, *prev = NULL, *nextNode = NULL;
    do
    {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    } while (current != head);

    head->next = prev;
    head = prev;

    cout << "Reverse Circular Linked List." << endl;

    return head;
}

// Insert At End - Function.
Node *insertAtEndFun(Node *head)
{
    int num = 0;
    cout << "Please, enter a number: ";
    cin >> num;

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->number = num;
    newNode->next = head;

    Node *last = head;
    while (last->next != head)
    {
        last = last->next;
    }

    last->next = newNode;

    return head;
}

// Sum Nodes - Function.
void sumNodesFun(Node *head)
{
    int sum = 0;
    Node *headTemporary = head;
    do
    {
        sum += head->number;
        head = head->next;
    } while (head != headTemporary);

    cout << "Sum All Nodes: " << sum << endl;
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
            countNodesFun(head);
            break;

        case 4:
            searchNumberFun(head);
            break;

        case 5:
            head = reverseCircularLinkedListFun(head);
            break;

        case 6:
            head = insertAtEndFun(head);
            break;

        case 7:
            sumNodesFun(head);
            break;

        default:
            break;
        }

    } while (answer != 8);

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
