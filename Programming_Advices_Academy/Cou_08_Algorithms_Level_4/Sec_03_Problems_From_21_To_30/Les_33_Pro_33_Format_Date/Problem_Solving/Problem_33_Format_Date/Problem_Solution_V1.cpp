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

string ReadStringDate(string message)
{
    string dateString;

    cout << message;
    getline(cin >> ws, dateString);

    return dateString;
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

string ReplaceWordInString(string s1, string stringToReplace, string sRepalceTo)
{
    short pos = s1.find(stringToReplace);

    while (pos != std::string::npos)
    {
        s1 = s1.replace(pos, stringToReplace.length(), sRepalceTo);

        pos = s1.find(stringToReplace); // find next
    }

    return s1;
}

string FormateDate(stDate date, string dateFormat = "dd/mm/yyyy")
{
    string formattedDateString = "";

    formattedDateString = ReplaceWordInString(dateFormat, "dd", to_string(date.day));

    formattedDateString = ReplaceWordInString(formattedDateString, "mm", to_string(date.month));

    formattedDateString = ReplaceWordInString(formattedDateString, "yyyy", to_string(date.year));

    return formattedDateString;
}

int main()
{
    WelcomeMessage();

    string DateString = ReadStringDate("\nPlease Enter Date dd/mm/yyyy? ");


    stDate Date = ConvertStringToDate(DateString);

    cout << "\n"
         << FormateDate(Date) << "\n";

    cout << "\n"
         << FormateDate(Date, "yyyy/dd/mm") << "\n";

    cout << "\n"
         << FormateDate(Date, "mm/dd/yyyy") << "\n";

    cout << "\n"
         << FormateDate(Date, "mm-dd-yyyy") << "\n";

    cout << "\n"
         << FormateDate(Date, "dd-mm-yyyy") << "\n";

    cout << "\n"
         << FormateDate(Date, "Day:dd, Month:mm, Year:yyyy") << "\n";

    cout << endl
         << endl;

    return 0;
}