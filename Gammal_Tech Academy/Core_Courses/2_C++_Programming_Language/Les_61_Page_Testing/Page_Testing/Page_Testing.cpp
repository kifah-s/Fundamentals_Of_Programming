

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

//* >>>>>>>>>>>>>>> Header Code <<<<<<<<<<<<<<< *//
// Header Class.
class Header
{
private:
    string htmlCode, cssCode;
    int headerNumber = 0;
    string intToString(int num)
    {
        switch (num)
        {
        case 1:
            return "1";
        case 2:
            return "2";
        case 3:
            return "3";
        case 4:
            return "4";
        }
        return "5";
    }

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
        cssCode = "table.headerTable { width: 80%; margin-left: auto; margin-right : auto;}";

        cssCode += "td.headerTd { border: 1px solid white; color: white; text-align: center; font-size: 20px; } a.headerA{ text-decoration: none; color: white; }";

        htmlCode = "<table class = \"headerTable\">";

        if (headerNumber == 1)
        {
            cssCode += "img.headerImg {width: 100%; height: auto; } ";

            string pictureFileName;

            cout << "Please enter picture file name: ";
            cin >> pictureFileName;

            htmlCode += "<tr><td class = \"headerTd\"colspan = \"" + intToString((int)pageName.size()) +
                        "\"><img class = \"headerImg {width: 100%; height: auto; } \" src =\"" + pictureFileName;
            htmlCode += "\" /> </td></tr>";
        }

        htmlCode += "<tr>";
        htmlCode += "<td class = \"headerTd\"> <a class = \" headerA \" href = \"index.html\">" + pageName[0] + "</a></td>";

        for (int i = 1; i < pageName.size(); i++)
        {
            htmlCode += "<td class = \"headerTd\"> <a class = \" headerA \" href = \"" + pageName[i] + ".html\">" + pageName[i] + "</a></td>";
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
// End Header Class.

//* >>>>>>>>>>>>>>> End Header Code <<<<<<<<<<<<<<< *//

//* >>>>>>>>>>>>>>> Footer Code <<<<<<<<<<<<<<< *//
// Footer Class.
class Footer
{
private:
    string htmlCode, cssCode;

public:
    void chooseFooter(string websiteName)
    {
        int footerNumber;

        "Footer 1:\n"
        "-----------------------------------\n"
        " (website Name) all rights reserve \n"
        "-----------------------------------\n"
        "Footer 2:\n"
        "-----------------------------------\n"
        "|    (Footer background color)    |\n"
        " (website Name) all rights reserved\n"
        "-----------------------------------\n"
        "Enter footer number: ";

        cin >> footerNumber;

        generateCode(footerNumber, websiteName);
    }

    void generateCode(int footerNumber, string websiteName)
    {
        // Add footer using html code.
        htmlCode = "<footer><div class = \"footerDiv\">" + websiteName + " all rights reserved</div></footer>";
        // htmlCode += websiteName;
        // htmlCode += " all rights reserved</div></footer>";

        // Add design for footer using css code.
        cssCode = "footer {margin-left: auto; margin-right: auto;}";
        cssCode += "div.footerDiv {postion: fixed; left: 0; bottom: 0; width: 100% ";

        if (footerNumber == 2)
        {
            // Add footer background color.
            string footerBackgroundColor;
            cout << "Please enter a footer background color: ";
            cin >> footerBackgroundColor;
            cssCode += "background-color: " + footerBackgroundColor + ";";

            // Add footer text color.
            string footerTextColor;
            cout << "Please enter a footer text color: ";
            cin >> footerTextColor;
            cssCode += "color: " + footerTextColor + ";";
        }

        cssCode += "}";
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
// End Footer Class.
//* >>>>>>>>>>>>>>> End Footer Code <<<<<<<<<<<<<<< *//

//* >>>>>>>>>>>>>>> Page Code <<<<<<<<<<<<<<< *//
// Page Class.
class Page
{
private:
    string htmlCode, cssCode;

public:
    void choosePage(string headerHtml, string footerHtml, string pageName, string backgroundColor)
    {
        int pageNumber;

        cout << "Page 1:\n"
                "---------------------------------------\n"
                "|    Youtube video | Youtube video    |\n"
                "---------------------------------------\n"
                "Page 2:\n"
                "---------------------------------------\n"
                "|    Youtube video | Text             |\n"
                "---------------------------------------\n"
                "choose Number: ";
        cin >> pageNumber;

        generateCode(headerHtml, footerHtml, pageName, pageNumber, backgroundColor);
    }

    void generateCode(string headerHtml, string footerHtml, string pageName, int pageNumber, string backgroundColor)
    {
        // Html Code.
        htmlCode = "<html><head><title>" + pageName + "</title>";
        htmlCode += "<link rel = \" stylesheet \" href = \" \\ header.css \">";
        htmlCode += "<link rel = \" stylesheet \" href = \" \\ footer.css \">";

        // Css Code.
        cssCode = "body { background-color: " + backgroundColor + "; }";
        cssCode += "table.pageTable { margin-right: auto; margin-left: auto; width: 80%; }";
        cssCode += "td.pageTd { color: white; text-align: center; }";
        cssCode += "iframe { width: 100%; }";

        // Html Code.
        htmlCode += "<style>" + cssCode + "</style></head>";
        htmlCode += "<body><br>" + headerHtml + "<br><br>";
        htmlCode += "<table class = \" pageTable \">";

        // Rows of number.
        cout << "Please enter a number of rows: ";
        int numberOfRows;
        cin >> numberOfRows;
        for (int i = 0; i < numberOfRows; i++)
        {
            htmlCode += "<tr><td class = \" pageTd \">";
            string videoLing;
            cout << "Please enter a video link: ";
            cin >> videoLing;
            htmlCode += "<iframe width=\"560\" height=\"315\" src=\"https://www.youtube.com/embed/" + videoLing + "\" title=\"YouTube video player\" frameborder=\"0\" allow=\"accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share\" allowfullscreen></iframe>";
            htmlCode += "<td><td class = \" pageTd \">";
            if (pageNumber == 1)
            {
                cout << "Please enter a video link: ";
                cin >> videoLing;
                htmlCode += "<iframe width=\"560\" height=\"315\" src=\"https://www.youtube.com/embed/" + videoLing + "\" title=\"YouTube video player\" frameborder=\"0\" allow=\"accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share\" allowfullscreen></iframe>";
            }
            else if (pageNumber == 2)
            {
                string text;
                cout << "Please enter a text: ";
                getchar();
                getline(cin, text);
                htmlCode += text;
            }
            htmlCode += "</td></tr>";
        }

        htmlCode += "</table>" + footerHtml + "</body></html>";
    }

    string getHtml()
    {
        return htmlCode;
    }
};
//* >>>>>>>>>>>>>>> End Page Code <<<<<<<<<<<<<<< *//

//! Note: Create main function just for testing page code ..

int main()
{
    Page p;
    p.choosePage("<br>Header<br>", "<br>Footer<br>", "kifah", "teal");

    FILE *out = fopen("index.html", "w");
    fprintf(out, "%s", p.getHtml().c_str());

    return 0;
}
