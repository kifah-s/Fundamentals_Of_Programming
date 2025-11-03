#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

class clsPerson
{
private:
    string _FullName;

    class clsAddress
    {
    private:
        string _AddressLine1;
        string _AddressLine2;
        string _City;
        string _Country;

    public:
        clsAddress(string AddressLine1, string AddressLine2, string City, string Country)
        {
            _AddressLine1 = AddressLine1;
            _AddressLine2 = AddressLine2;
            _City = City;
            _Country = Country;
        }

        string SetAddressLine1(string AddressLine1) { _AddressLine1 = AddressLine1; }
        string GetAddressLine1() { return _AddressLine1; }

        string SetAddressLine2(string AddressLine2) { _AddressLine2 = AddressLine2; }
        string GetAddressLine2() { return _AddressLine2; }

        string SetCity(string City) { _City = City; }
        string GetCity() { return _City; }

        string SetCountry(string Country) { _Country = Country; }
        string GetCountry() { return _Country; }

        void Print()
        {
            cout << "\nAddress:\n";
            cout << _AddressLine1 << endl;
            cout << _AddressLine2 << endl;
            cout << _City << endl;
            cout << _Country << endl;
        }
    };

public:
    string SetFullName(string FullName) { _FullName = FullName; }
    string GetFullName() { return _FullName; }

    clsAddress Address = clsAddress("", "", "", "");

    clsPerson(string FullName, string AddressLine1, string AddressLine2, string City, string Country)
    {
        _FullName = FullName;

        // Initiate address class by it's constructor.
        Address = clsAddress(AddressLine1, AddressLine2, City, Country);
    }
};

int main()
{
    WelcomeMessage();

    clsPerson Person1("Mohammed Abu-Hadhoud", "Building 10", "Queen Rania Street", "Amman", "Jordan");
    Person1.Address.Print();

    cout << endl
         << endl;

    return 0;
}