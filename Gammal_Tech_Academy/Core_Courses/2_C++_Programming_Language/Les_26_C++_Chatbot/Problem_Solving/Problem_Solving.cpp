
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class StringFormatter
{
private:
    std::string str;

public:
    StringFormatter(const std::string &initialStr) : str(initialStr) {}
    void reverse()
    {
        std::reverse(str.begin(), str.end());
    }
    void toUpper()
    {
        std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c)
                       { return std::toupper(c); });
    }
    void toLower()
    {
        std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c)
                       { return std::tolower(c); });
    }
    void concatenate(const std::string &additionalStr)
    {
        str += additionalStr;
    }
    std::string getResult()
    {
        return str;
    }
};

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    std::string initialStr, command, extra;
    int numOfCommands;
    std::getline(std::cin, initialStr);
    std::cin >> numOfCommands;
    std::cin.ignore(); // Ignore the newline after reading numOfCommands
    StringFormatter formatter(initialStr);
    for (int i = 0; i < numOfCommands; i++)
    {
        std::getline(std::cin, command);
        if (command == "reverse")
        {
            formatter.reverse();
        }
        else if (command == "toUpper")
        {
            formatter.toUpper();
        }
        else if (command == "toLower")
        {
            formatter.toLower();
        }
        else if (command.substr(0, 11) == "concatenate")
        {
            extra = command.substr(12);
            formatter.concatenate(extra);
        }
    }
    std::cout << formatter.getResult() << std::endl;

    cout << "\n\n";

    return 0;
}
