
//* Linked List Sum Even Using Recursion Program (Version 1).

/*
* Write a program to find and print the sum of all even numbers in the linked list.

! Input:
! Please, enter a number that represents the number of numbers in the linked list: 4
! Please, enter a number: 1
! Please, enter a number: 2
! Please, enter a number: 3
! Please, enter a number: 4

! Output:
! Sum of even numbers: 6
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
    cout << "\n\nYou welcome in Linked List Sum Even Using Recursion Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Numbers In Linked List - Function.
int getNumberOfNumbersInLinkedListFun()
{
    int num = 0;
    cout << "Please, enter a number (That number represents the number of numbers in the linked list): ";
    cin >> num;

    return num;
}

// Add Nodes - Function.
Node *addNodesFun(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        temp = (Node *)malloc(sizeof(Node));

        cout << "Please, enter number: ";
        cin >> temp->number;

        temp->next = NULL;

        return temp;
    }

    temp->next = addNodesFun(temp->next);

    return temp;
}

// Sum Even Numbers - Recursion Function.
int sumEvenNumbersRecFun(Node *head, int sumEven = 0)
{
    Node *temp = head;

    if (temp == NULL)
    {
        return sumEven;
    }
    else
    {
        if (temp->number % 2 == 0)
        {
            sumEven += temp->number;
        }

        return sumEvenNumbersRecFun(temp->next, sumEven);
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
    cout << "\n----------------------------" << endl;
    cout << "Memory freed successfully!" << endl;
    cout << "----------------------------" << endl;
}

// Result - Function.
void resultFun()
{
    // Declare Variables and Pointer.
    Node *head = NULL;
    int NumberOfNumbersInLinkedList = 0;

    // Call Functions.
    printWelcomeMessageFun();
    NumberOfNumbersInLinkedList = getNumberOfNumbersInLinkedListFun();
    for (int i = 0; i < NumberOfNumbersInLinkedList; i++)
    {
        head = addNodesFun(head);
    }

    cout << "\nSum Even Numbers: " << sumEvenNumbersRecFun(head) << endl;

    freeAllocatedMemoryFun(head);
}

//* End Function ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
