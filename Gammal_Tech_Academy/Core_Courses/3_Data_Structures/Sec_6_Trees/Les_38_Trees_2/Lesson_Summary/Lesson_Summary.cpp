
//* >>>>> Lesson Summary <<<<< *//

#include <iostream>
#include <ctime>

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

//* Struct ..
//* Create struct "Node".
struct node
{
    int data;
    node *p_1, *p_2;

    //* Contractor.
    node(int i)
    {
        data = i;
    }

    //* Method: Print data.
    void printData()
    {
        cout << data << endl;
    }
};

//* End Struct ..

int main()
{
    lessonSummaryFun();

    node *root = new node(1);

    root->p_1 = new node(10);
    root->p_2 = new node(20);

    root->p_1->p_1 = new node(30);
    root->p_1->p_2 = new node(40);
    root->p_2->p_1 = new node(50);
    root->p_2->p_2 = new node(60);

    cout << "implementing the tree: \n\n";

    cout << "                             " << root->data << endl;

    cout << "                   " << root->p_1->data << "                " << root->p_2->data << endl;

    cout << "               " << root->p_1->p_1->data << "       " << root->p_1->p_2->data;
    cout << "       " << root->p_2->p_1->data << "       " << root->p_2->p_2->data;

    cout << endl;

    return 0;
}
