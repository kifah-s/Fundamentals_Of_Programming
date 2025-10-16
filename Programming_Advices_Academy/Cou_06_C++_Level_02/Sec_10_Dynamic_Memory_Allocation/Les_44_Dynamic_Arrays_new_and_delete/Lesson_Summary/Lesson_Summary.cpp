#include <iostream>
#include <vector>

using namespace std;

void WelcomeMessage()
{
    system("cls");
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    // int totalNumberOfStudent = 0;
    // cout << "Please, enter total number of student: ";
    // cin >> totalNumberOfStudent;

    // float arr[100];

    // cout << "\nPlease, enter grade of student." << endl;

    // for (int i = 0; i < totalNumberOfStudent; i++)
    // {
    //     cout << "Student " << i + 1 << ": ";
    //     cin >> arr[i];
    // }

    // cout << "\n\nDisplaying grades of students." << endl;
    // for (int i = 0; i < totalNumberOfStudent; i++)
    // {
    //     cout << "Student " << i + 1 << ": " << arr[i] << endl;
    // }

    //* -------------------------------------------------------------

    // int totalNumberOfStudent;
    // cout << "Please, enter total number of student: ";
    // cin >> totalNumberOfStudent;

    // vector<float> vecStudentGrades;
    // float tempGrade = 0;

    // cout << "\nPlease, enter grade of student." << endl;

    // for (int i = 0; i < totalNumberOfStudent; i++)
    // {
    //     cout << "Student " << i + 1 << ": ";
    //     cin >> tempGrade;
    //     vecStudentGrades.push_back(tempGrade);
    // }

    // cout << "\n\nDisplaying grades of students." << endl;
    // for (int i = 0; i < totalNumberOfStudent; i++)
    // {
    //     cout << "Student " << i + 1 << ": " << vecStudentGrades[i] << endl;
    // }

    //* -------------------------------------------------------------

    int totalNumberOfStudent;
    cout << "Please, enter total number of student: ";
    cin >> totalNumberOfStudent;

    // //* Memory allocation of num number of float.
    // float *ptr = new float[totalNumberOfStudent];

    float *ptr;

    //* Memory allocation of num number of float.
    ptr = new float[totalNumberOfStudent];

    cout << "\nPlease, enter grade of student." << endl;

    for (int i = 0; i < totalNumberOfStudent; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\n\nDisplaying grades of students." << endl;
    for (int i = 0; i < totalNumberOfStudent; i++)
    {
        cout << "Student " << i + 1 << ": " << *(ptr + i) << endl;
    }

    //* ptr memory is released.
    delete[] ptr;

    //* -------------------------------------------------------------

    cout << endl
         << endl;

    return 0;
}