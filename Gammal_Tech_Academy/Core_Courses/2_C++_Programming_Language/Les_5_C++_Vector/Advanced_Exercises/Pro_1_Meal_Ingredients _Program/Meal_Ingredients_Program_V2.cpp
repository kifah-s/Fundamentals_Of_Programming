

//* >>> Meal Ingredients Program ( Version 2 ) <<< */

/* >>> A program for mothers to help them remember the ingredients of each food. Many mothers find it difficult to choose the meal of the day that they should make. So the meal with the fewest ingredients is the easiest and quickest to prepare. You have to write a program that contains some names of meals. It displays them in the form of choices on the screen, and when you choose a specific meal, it prints the components of this meal.

required: Find the ingredients of your favorite foods and write them in a program. When the program is executed, the user is presented with food choices on the screen and asked to choose a specific meal, then the ingredients of this meal are shown to him. <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
int selectMealFun(int s);
void mealIngredientsFun(vector<string> m1, vector<string> m2, vector<string> m3, int s);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    vector<string> meal_1_Mjaddara = {"Lentils", "Rice", "Onions", "Garlic", "Vegetable oil", "Spices"},
                   meal_2_Shawarma = {"Lamb or chicken", "Vegetable oil", "Spices", "Pita bread", "Yogurt", "Tomatoes", "Cucumbers"},
                   meal_3_Kubba = {"Ground meat", "Onions", "Spices", "Bread", "Vegetable oil"};

    int select = 0;
    // ... End Variables ...

    // ... Functions ...
    select = selectMealFun(select);
    mealIngredientsFun(meal_1_Mjaddara, meal_2_Shawarma, meal_3_Kubba, select);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Meal Ingredients Program ( Version 2 ) .." << endl
         << endl;
}

// Select meal / Function.
int selectMealFun(int s)
{
    cout << "The three best Syrian meals: " << endl
         << "1) Mjaddara" << endl
         << "2) Shawarma" << endl
         << "3) Kubba" << endl
         << endl
         << "Select a meal Please: ";
    cin >> s;

    return s;
}

// meal Ingredients / Function.
void mealIngredientsFun(vector<string> m1, vector<string> m2, vector<string> m3, int s)
{
    switch (s)
    {
    case 1:
        cout << endl
             << "ingredients the meal:" << endl;
        for (string ingredients : m1)
        {
            cout << ingredients << endl;
        }
        cout << endl
             << endl;
        break;
    case 2:
        cout << endl
             << "ingredients the meal:" << endl;
        for (string ingredients : m2)
        {
            cout << ingredients << endl;
        }
        cout << endl
             << endl;
        break;
    case 3:
        cout << endl
             << "ingredients the meal:" << endl;
        for (string ingredients : m3)
        {
            cout << ingredients << endl;
        }
        cout << endl
             << endl;
        break;
    }
}
// *** End Functions ***
