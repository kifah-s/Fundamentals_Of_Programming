# More Learning ..

**INFO_1 : "Inheritance"**

"**Inheritance in Object-Oriented Programming**

Inheritance is one of the fundamental concepts in object-oriented programming, and it allows you to create new classes by extending existing classes.

The basic idea behind inheritance is that you can create a new class that inherits all the properties and behaviors of another class. This means that you don't have to write the same code twice, which makes your code more reusable and easier to maintain.

For example, you could create a class called `Animal` that represents any animal. Then, you could create a subclass of `Animal` called `Dog`. `Dog` will inherit all the properties and behaviors of `Animal`, plus its own properties and behaviors.

Here is an example of how to use inheritance in the C++ programming language:

```c++
// Animal class
class Animal
{
public:
  std::string name;
  int age;

  void Speak()
  {
    std::cout << "The animal is speaking." << std::endl;
  }
};

class Dog : public Animal
{
public:
  std::string breed;

  void Bark()
  {
    std::cout << "The dog is barking." << std::endl;
  }
};

int main()
{
  Dog dog;
  dog.name = "Rex";
  dog.age = 10;
  dog.breed = "Golden Retriever";

  dog.Speak(); // Prints "The animal is speaking."
  dog.Bark();  // Prints "The dog is barking."

  return 0;
}

```

In this example, `Dog` inherits all the properties and behaviors of `Animal`. In addition, `Dog` has an additional property called `Breed`.

When you create an object of the `Dog` class, it inherits all the properties and behaviors of `Animal`. You can then use these properties and behaviors in your code.

Here are some of the benefits of using inheritance:

- **Reduce code duplication:** You can use inheritance to avoid writing the same code twice.
- **Increase reusability:** You can create new classes by extending existing classes.
- **Ease of maintenance:** Makes your code easier to maintain because it makes it easier to add new features or remove old features.

I hope this helps! Let me know if you have any other questions." **(Google Bard)**

---

<br>

**INFO_2 : "keyword `virtual`"**

The keyword `virtual` indicates that the `speak()` method is a virtual method. A virtual method is a method that can be redefined in derived classes.

In your example, the `Animal` class has a virtual `speak()` method. This means that the `speak()` method can be redefined in any derived class from the `Animal` class.

For example, the `speak()` method can be defined in the `Dog` class as follows:

```c++
class Dog : public Animal
{
public:
    virtual string speak() override
    {
        return "Woof!";
    }
};
```

In this example, the `speak()` method is redefined to print "Woof!".

When an object is created from a derived class, the `speak()` method defined in the derived class is used.

Here is an example of how to use the `speak()` method:

```c++
#include <iostream>

using namespace std;

class Animal
{
public:
    virtual string speak()
    {
        return "Unknown";
    }
};

class Dog : public Animal
{
public:
    virtual string speak() override
    {
        return "Woof!";
    }
};

int main()
{
    Animal* animal = new Dog();

    cout << animal->speak() << endl;

    return 0;
}
```

This program will print the following output:

```
Woof!
```

The benefit of the `virtual` keyword is that it allows you to write more flexible code. By using virtual methods, you can write code that can be used with objects from any derived class from the base class.

Here is a more detailed explanation of the `virtual` keyword:

- The `virtual` keyword is used to declare a method that can be redefined in derived classes.
- When an object is created from a derived class, the `virtual` method defined in the derived class is used, regardless of the type of pointer or reference used to call the method.
- The `virtual` keyword is used to implement polymorphism, which allows you to write code that can be used with objects from different classes.

I hope this helps! Let me know if you have any other questions." **(Google Bard)**

---

<br>

**INFO_3 : "Virtual methods"**

**Virtual methods are methods that can be redefined in derived classes. Virtual methods allow you to write more flexible code, where the same method name can be used for different methods in different classes.**

Here is a simple example of virtual methods:

```c++
class Animal
{
public:
    virtual void speak()
    {
    }
};

class Dog : public Animal
{
public:
    void speak() override
    {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak() override
    {
        cout << "Meow!" << endl;
    }
};

int main()
{
    Animal* animal = new Dog();
    animal->speak(); // Prints "Woof!"

    animal = new Cat();
    animal->speak(); // Prints "Meow!"

    return 0;
}
```

In this example, the `Animal` class has a virtual `speak()` method. The `speak()` method can be redefined in any derived class from the `Animal` class.

In this example, the `speak()` method is redefined in the `Dog` class to print "Woof!". The `speak()` method is redefined in the `Cat` class to print "Meow!".

When an object is created from a derived class, the `speak()` method defined in the derived class is used.

In the above example, an object from the `Dog` class is created first. Then, an object from the `Cat` class is created.

When the `speak()` method is called on the first object, the `speak()` method defined in the `Dog` class is used. This will print "Woof!".

When the `speak()` method is called on the second object, the `speak()` method defined in the `Cat` class is used. This will print "Meow!".

**Here is a more detailed explanation of virtual methods:**

- The `virtual` keyword is used to declare a method that can be redefined in derived classes.
- When an object is created from a derived class, the `virtual` method defined in the derived class is used, regardless of the type of pointer or reference used to call the method.
- The `virtual` keyword is used to implement polymorphism, which allows you to write code that can be used with objects from different classes.

I hope this helps! Let me know if you have any other questions." **(Google Bard)**
