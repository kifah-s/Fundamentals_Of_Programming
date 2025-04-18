
//* Linked List Count Number 2 Using Recursion Program (Version 1).

/*
* Write a program to find and print the count of numbers divisible by 3 in the linked list.

! Input:
! Please, enter a number (That number represents the number of numbers in the linked list): 5
! Enter number: 6
! Enter number: 9
! Enter number: 7
! Enter number: 8
! Enter number: 12

! Output:
! Count of numbers divisible by 3: 2
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
    cout << "\n\nYou welcome in Linked List Count Number 2 Using Recursion Program (Version 1) ..\n"
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

// Count Of Numbers Divisible By 3 - Recursion Function.
int countOfNumbersDivisibleBy3RecFun(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return 0;
    }
    int count = countOfNumbersDivisibleBy3RecFun(temp->next);
    return (temp->number % 3 == 0) ? count + 1 : count;
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

    cout << "\n--------------------" << endl;
    cout << "Count Of Numbers Divisible By 3: " << countOfNumbersDivisibleBy3RecFun(head);
    cout << "\n--------------------" << endl;
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
