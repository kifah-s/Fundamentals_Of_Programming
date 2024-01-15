

/* >>> String Program ( Version 1 ) <<< */

/* >>> Create a class String that represents a string of characters.
Overload the + operator to concatenate two strings. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>
#include <map>
#include <cstring>

using namespace std;

// ... Classes ...
class String
{
public:
     // Constructors
     String() : data_(nullptr), size_(0) {}
     String(const char *str)
     {
          size_ = std::strlen(str);
          data_ = new char[size_ + 1];
          std::strcpy(data_, str);
     }
     String(const String &other)
     {
          size_ = other.size_;
          data_ = new char[size_ + 1];
          std::strcpy(data_, other.data_);
     }

     // Overload + operator to concatenate two strings
     String operator+(const String &other) const
     {
          String result;
          result.size_ = size_ + other.size_;
          result.data_ = new char[result.size_ + 1];
          std::strcpy(result.data_, data_);
          std::strcat(result.data_, other.data_);
          return result;
     }

     // Overload << operator to output a string to the console
     friend std::ostream &operator<<(std::ostream &os, const String &str)
     {
          os << str.data_;
          return os;
     }

     // Destructor
     ~String() { delete[] data_; }

private:
     char *data_;
     std::size_t size_;
};
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in String Program ( Version 1 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     String s1("Hello, ");
     String s2("world!");
     String s3 = s1 + s2;
     std::cout << s3 << std::endl;

     cout << endl
          << endl;

     return 0;
}