
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <map>
#include <string>

using namespace std;

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

    int N;
    cin >> N;
    cin.ignore();
    
    map<string, string> responses = {
        {"PRODUCT_INFO", "Information about [Detail]: [Product Info Here]"},
        {"SERVICE_QUERY", "Current status of [Detail] services: [Service Info Here]"},
        {"ORDER_STATUS", "Order [Detail] is currently: [Order Status Here]"}};

    for (int i = 0; i < N; ++i)
    {
        string line, commandType, detail;
        getline(cin, line);
        size_t spacePos = line.find(' ');
        commandType = line.substr(0, spacePos);
        detail = line.substr(spacePos + 1);
        if (responses.find(commandType) != responses.end())
        {
            string response = responses[commandType];
            size_t detailPos = response.find("[Detail]");
            while (detailPos != string::npos)
            {
                response.replace(detailPos, 8, detail);
                detailPos = response.find("[Detail]");
            }
            cout << response << endl;
        }
        else
        {
            cout << "Unknown command: " << commandType << endl;
        }
    }

    cout << "\n\n";

    return 0;
}
