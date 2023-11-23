

//* >>>>>>>>>>>>>>> Header Code <<<<<<<<<<<<<<< *//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Header
{
private:
    string htmlCode, cssCode;
    int headerNumber = 0;

public:
    void chooseHeader(vector<string> pageName)
    {

        cout << "Header1:\n"
                "--------------------------\n"
                "|         picture        |\n"
                "--------------------------\n"
                "| Home | contact | About |\n"
                "--------------------------\n"
                "Header2:\n"
                "--------------------------\n"
                "| Home | contact | About |\n"
                "--------------------------\n"
                "please, enter header number: ";

        cin >> headerNumber;

        while (headerNumber != 1 && headerNumber != 2)
        {
            cout << "please, enter a correct header number: ";
        }

        generateCode(pageName);
    }

    void generateCode(vector<string> pageName)
    {
        htmlCode = "<table>";

        if (headerNumber == 1)
        {
            string pictureFileName;

            cout << "Please enter picture file name: ";
            cin >> pictureFileName;
        }

        htmlCode += "<tr>";
        for (int i = 0; i < pageName.size(); i++)
        {
            htmlCode += "<td>" + pageName[i] + "</td>";
        }

        htmlCode += "</tr> </table>";
    }

    string getHtml()
    {
        return htmlCode;
    }

    string getCss()
    {
        return cssCode;
    }
};