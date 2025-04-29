
//*  Example 1 ..

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
    Node *next, *prev;
};

//* End Struct ..

//* Functions ..

// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Linked List Add Person Program (Version 1) ..\n"
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

        cout << "Please, enter the name: ";
        cin >> temp->name;
        cout << "Please, enter the payment: ";
        cin >> temp->payment;

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
void showNodesFun(Node *head, Node *headTemporary)
{
    do
    {
        cout << "--------------------" << endl;
        cout << "Name: " << head->name << endl;
        cout << "Payment: " << head->payment << endl;
        cout << "--------------------" << endl;
        head = head->next;
    } while (head != headTemporary);
}

// Reverse Show Nodes - Function.
void reverseShowNodesFun(Node *head, Node *headTemporary)
{
    do
    {
        cout << "--------------------" << endl;
        cout << "Name: " << head->name << endl;
        cout << "Payment: " << head->payment << endl;
        cout << "--------------------" << endl;
        head = head->prev;
    } while (head != headTemporary);
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
            reverseShowNodesFun(head, head);
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
