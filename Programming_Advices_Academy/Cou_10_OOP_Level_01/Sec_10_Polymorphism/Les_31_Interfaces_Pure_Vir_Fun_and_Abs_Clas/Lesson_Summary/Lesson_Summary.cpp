#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

// Abstract Class / Interface / Contract.
class clsMobile
{
    virtual void Dial(string PhoneNumber) = 0;

    virtual void SendSMS(string PhoneNumber, string Text) = 0;

    virtual void TakePicture() = 0;
};

class clsIphone : public clsMobile
{
    // This class signed a contract with clsMobile abstract class therefore it should implement everything in the abstract class.
public:
    void Dial(string PhoneNumber) {};

    void SendSMS(string PhoneNumber, string Text) {};

    void TakePicture() {};

    void MyOwnMethod() {};
};

class clsSamsungNote10 : public clsMobile
{
    // This class signed a contract with clsMobile abstract class therefore it should implement everything in the abstract class.
public:
    void Dial(string PhoneNumber) {}

    void SendSMS(string PhoneNumber, string Text) {}

    void TakePicture() {}
};

int main()
{
    WelcomeMessage();

    clsIphone Iphone1;
    clsSamsungNote10 Note10;

    cout << endl
         << endl;

    return 0;
}