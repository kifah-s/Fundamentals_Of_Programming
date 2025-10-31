#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

class clsAddress
{
private:
    string _AddressLine1;
    string _AddressLine2;
    string _POBox;
    string _ZipCode;

public:
    // Constructor.
    clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZipCode)
    {
        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _POBox = POBox;
        _ZipCode = ZipCode;
    }

    // Copy Constructor.
    // clsAddress(clsAddress &old_obj)
    // {
    //     _AddressLine1 = old_obj.GetAddressLine1();
    //     _AddressLine2 = old_obj.GetAddressLine2();
    //     _POBox = old_obj.GetPOBox();
    //     _ZipCode = old_obj.GetZipCode();
    // }

    // void SetAddressLine1(string AddressLine1)
    // {
    //     _AddressLine1 = AddressLine1;
    // }
    // string GetAddressLine1()
    // {
    //     return _AddressLine1;
    // }
    
    // void SetAddressLine2(string AddressLine2)
    // {
    //     _AddressLine2 = AddressLine2;
    // }
    // string GetAddressLine2()
    // {
    //     return _AddressLine2;
    // }
    
    // void SetPOBox(string POBox)
    // {
    //     _POBox = POBox;
    // }
    // string GetPOBox()
    // {
    //     return _POBox;
    // }
    
    // void SetZipCode(string ZipCode)
    // {
    //     _ZipCode = ZipCode;
    // }
    // string GetZipCode()
    // {
    //     return _ZipCode;
    // }

    void Print()
    {
        cout << "\nAddress Details:\n";
        cout << "------------------------";
        cout << "\nAddressLine1: " << _AddressLine1 << endl;
        cout << "AddressLine2: " << _AddressLine2 << endl;
        cout << "POBox       : " << _POBox << endl;
        cout << "ZipCode     : " << _ZipCode << endl;
    }
};

int main()
{
    WelcomeMessage();

    clsAddress Address1("Queen Alia Street", "B 303 ", "11192", "5555");
    Address1.Print();

    // Copy Constructor.
    clsAddress Address2 = Address1;
    Address2.Print();

    cout << endl
         << endl;

    return 0;
}