
//* Double Linked List 1 Program (Version 1).

/*
* Write a program to create a double linked list by taking user input and display its elements.

! Input:
! Please, enter the number of elements: 4
! Please, enter element: 1
! Please, enter element: 2
! Please, enter element: 3
! Please, enter element: 4

! Output:
! Double Linked List: 1 <-> 2 <-> 3 <-> 4 <-> NULL
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
    cout << "\n\nYou welcome in Double Linked List 1 Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Elemets - Function.
int getNumberOfElemetsFun()
{
    int numOfEle = 0;
    cout << "Please, enter number of elements: ";
    cin >> numOfEle;

    return numOfEle;
}

// Add Nodes - Function.
Node *addNodesFun(Node *prevNode, Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        temp = (Node *)malloc(sizeof(Node));

        cout << "Please, enter element: ";
        cin >> temp->number;

        temp->next = NULL;
        temp->prev = prevNode;

        return temp;
    }

    temp->next = addNodesFun(temp, temp->next);

    return temp;
}

// Show Nodes - Function.
void showNodesFun(Node *head)
{
    Node *temp = head;
    Node *reverse = NULL;
    cout << "\nDouble Linked List: ";
    while (temp != NULL)
    {
        cout << temp->number << " <-> ";

        if (temp->next == NULL)
        {
            cout << "NULL" << endl;
            reverse = temp;
        }

        temp = temp->next;
    }

    // while (reverse != NULL)
    // {
    //     cout << "--------------------" << endl;
    //     cout << "Number: " << temp->number << endl;
    //     cout << "--------------------" << endl;
    //     reverse = reverse->prev;
    // }
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
    cout << "\n----------------------------" << endl;
    cout << "Memory freed successfully!" << endl;
    cout << "----------------------------" << endl;
}

// Result - Function.
void resultFun()
{
    // Declare Pointers And Variables.
    Node *head = NULL;
    int numberOfElements = 0;

    // Call Functions.
    printWelcomeMessageFun();
    numberOfElements = getNumberOfElemetsFun();
    for (int i = 0; i < numberOfElements; i++)
    {
        head = addNodesFun(head, head);
    }
    showNodesFun(head);
    freeAllocatedMemoryFun(head);

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
