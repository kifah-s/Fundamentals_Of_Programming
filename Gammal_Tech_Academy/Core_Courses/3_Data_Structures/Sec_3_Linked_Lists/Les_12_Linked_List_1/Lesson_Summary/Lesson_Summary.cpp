
//* >>>>> Lesson Summary <<<<< *//

#include <iostream>
#include <ctime>

#define sn struct node

using namespace std;

//* Functions ..

// Print Lesson Summary / Function.
void lessonSummaryFun()
{
    cout << endl
         << "Lesson Summary .." << endl
         << endl;
}

//* End Functions ..

struct node
{
    int data;
    struct node *next;
};

int main()
{
    lessonSummaryFun();

    //*-----------------------------------------------
    
    /*

    //* Create linked list.

    struct node *head, *temp;

    head = (sn *)malloc(sizeof(sn));

    head->data = 5;
    head->next = (sn *)malloc(sizeof(sn));

    head->next->data = 6;
    head->next->next = (sn *)malloc(sizeof(sn));

    head->next->next->data = 7;
    head->next->next->next = NULL;

    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "     ";
        temp = temp->next;
    }

    free(head->next->next);
    free(head->next);
    free(head);

    */

    //*-----------------------------------------------

    cout << endl
         << endl;

    return 0;
}
