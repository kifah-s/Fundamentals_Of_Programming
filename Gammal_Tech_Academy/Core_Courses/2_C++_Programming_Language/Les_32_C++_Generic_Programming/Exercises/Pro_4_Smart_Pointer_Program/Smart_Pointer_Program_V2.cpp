

/* >>> Smart Pointer Program ( Version 2 ) <<< */

/* >>> Create a template class for a smart pointer that can manage the lifetime of an object,
with methods to create and destroy the object, and to access its members. <<< */

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
#include <numeric>

using namespace std;

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Smart Pointer Program ( Version 2 ) .." << endl
          << endl;
}

// ... End Functions ...

// ... Classes ...
template <typename T>
class SmartPtr
{
public:
     SmartPtr() : ptr_(nullptr) {}

     SmartPtr(T *ptr) : ptr_(ptr) {}

     SmartPtr(const SmartPtr<T> &other)
         : ptr_(other.ptr_ ? new T(*other.ptr_) : nullptr) {}

     ~SmartPtr() { delete ptr_; }

     SmartPtr<T> &operator=(const SmartPtr<T> &other)
     {
          if (this != &other)
          {
               delete ptr_;
               ptr_ = other.ptr_ ? new T(*other.ptr_) : nullptr;
          }
          return *this;
     }

     T *operator->() const { return ptr_; }

     T &operator*() const { return *ptr_; }

private:
     T *ptr_;
};

class MyClass
{
public:
     MyClass(int value) : value_(value) {}

     int getValue() const { return value_; }

private:
     int value_;
};

// ... End Classes ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     SmartPtr<MyClass> ptr1(new MyClass(42));
     SmartPtr<MyClass> ptr2(ptr1);
     SmartPtr<MyClass> ptr3 = ptr2;

     cout << "ptr1 value = " << ptr1->getValue() << endl;
     cout << "ptr2 value = " << ptr2->getValue() << endl;
     cout << "ptr3 value = " << ptr3->getValue() << endl;

     cout << endl
          << endl;

     return 0;
}