
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
// Create Struct.
struct gammal
{
    string name;
    int score;

    gammal *left, *right;

    //* Constructor.
    gammal(string n, int s)
    {
        name = n;
        score = s;

        left = NULL;
        right = NULL;
    }

    //* Method.
    void print()
    {
        cout << name << "\t" << score << endl;
    }
};
//* End Struct ..

//* Functions ..
// Add Function.
gammal *add(gammal *g, string n, int s)
{
    if (g == NULL)
    {
        g = new gammal(n, s);
        return g;
    }

    if (s < g->score)
    {
        g->left = add(g->left, n, s);
    }

    if (s > g->score)
    {
        g->right = add(g->right, n, s);
    }

    return g;
}

// Show Function.
void show(gammal *g)
{
    if (g == NULL)
    {
        return;
    }
    

    g->print();

    show(g->left);
    show(g->right);
}
//* End Functions ..

int main()
{
    lessonSummaryFun();

    gammal *g = NULL;
    int answer = 0, s = 0;
    string n;

    do
    {
        cout << "1) Add .." << endl;
        cout << "2) Show .." << endl;
        cout << "3) Exit .." << endl;
        cout << "What would you like to do ? ";
        cin >> answer;

        if (answer == 1)
        {
            cout << "Name: ";
            cin >> n;

            cout << "Score: ";
            cin >> s;

            g = add(g, n, s);
        }
        else if (answer == 2)
        {
            show(g);
        }

    } while (answer == 1 || answer == 2);

    cout << endl;

    return 0;
}
