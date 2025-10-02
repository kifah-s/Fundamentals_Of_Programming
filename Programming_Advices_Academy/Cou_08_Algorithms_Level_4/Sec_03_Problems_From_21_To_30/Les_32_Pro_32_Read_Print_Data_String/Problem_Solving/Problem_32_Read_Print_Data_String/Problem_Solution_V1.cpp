#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct stDate
{
    short year;
    short month;
    short day;
};

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

vector<string> SplitString(string myString, string delim)
{
    vector<string> vecString;
    short postion = 0;
    string word = "";

    while ((postion = myString.find(delim)) != std::string::npos)
    {
        word = myString.substr(0, postion);

        if (word != "")
        {
            vecString.push_back(word);
        }

        myString.erase(0, postion + delim.length());
    }

    if (myString != "")
    {
        vecString.push_back(myString);
    }

    return vecString;
}

stDate ConvertStringToDate(string stringDate)
{
    stDate date;
    vector<string> vecDate;

    vecDate = SplitString(stringDate, "/");

    date.day = stoi(vecDate[0]);
    date.month = stoi(vecDate[1]);
    date.year = stoi(vecDate[2]);

    return date;
}

string ConvertDateToString(stDate structDate)
{
    return to_string(structDate.day) + "/" + to_string(structDate.month) + "/" + to_string(structDate.year);
}

int main()
{
    WelcomeMessage();

    stDate structDate;
    string stringDate;

    cout << "\nPlease, enter date dd/mm/yyyy: ";
    cin >> stringDate;

    structDate = ConvertStringToDate(stringDate);
    cout << "\nDay: " << structDate.day << endl;
    cout << "Month: " << structDate.month << endl;
    cout << "Year: " << structDate.year << endl;

    cout << "\nYou Entered: " << ConvertDateToString(structDate) << endl;

    cout << endl
         << endl;

    return 0;
}