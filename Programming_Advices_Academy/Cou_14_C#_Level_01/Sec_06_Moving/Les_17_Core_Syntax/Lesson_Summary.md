## Core Syntax Comparisons C++ and C#

### 1: Program Entry Point

#### C++
```
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World" << endl;

    return 0;
}
```

#### C#
```
using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Hello World");
    }
}
```

---

### 2: Namespaces and Imports

#### C++
```
#include <vector>

namespace MyApp
{
    class A
    {
    };
}
```

#### C#
```
using System.Collections.Generic;

namespace MyApp
{
    class A
    {
    }
}
```

---

### 3: Variables and Constants

#### C++
```
int x = 10;
auto y = 20;
const double PI = 3.14;
```

#### C#
```
int x = 10;
var y = 20;
const double PI = 3.14;
readonly int Max;   // Can be assigned only in constructor
```

---

### 4: Strings

#### C++
```
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s = "Hello";
    s = s + " World";
    cout << s << endl;
}
```

#### C#
```
using System;

class Program
{
    static void Main()
    {
        string s = "Hello";
        s = s + " World";
        Console.WriteLine(s);
    }
}
```

---

### 5: Console Input and Output

#### C++
```
#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter number: ";
    cin >> x;
    cout << "Value: " << x << endl;
}
```

#### C#
```
using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter number: ");
        int x = int.Parse(Console.ReadLine());
        Console.WriteLine("Value: " + x);
    }
}
```

---

### 6: Conditional Statements

#### C++
```
#include <iostream>

using namespace std;

int main()
{
    int n = 5;

    if (n > 0)
    {
        cout << "Positive";
    }
    else
    {
        cout << "Non-positive";
    }
}

```

#### C#
```
using System;

class Program
{
    static void Main()
    {
        int n = 5;

        if (n > 0)
        {
            Console.WriteLine("Positive");
        }
        else
        {
            Console.WriteLine("Non-positive");
        }
    }
}
```

---

### 7: Loops

#### C++
```
#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }
}
```

#### C#
```
using System;

class Program
{
    static void Main()
    {
        for (int i = 0; i < 5; i++)
        {
            Console.WriteLine(i);
        }
    }
}
```

---

### 8: Functions / Methods

#### C++
```
#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    cout << add(3, 4) << endl;
}
```

#### C#
```
using System;

class MathUtils
{
    public static int Add(int a, int b)
    {
        return a + b;
    }

    static void Main()
    {
        Console.WriteLine(Add(3, 4));
    }
}
```

---

### 9: Classes and Inheritance

#### C++
```
#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void Speak()
    {
        cout << "Animal" << endl;
    }
};

class Dog : public Animal
{
public:
    void Speak() override
    {
        cout << "Dog" << endl;
    }
};

int main()
{
    Dog d;
    d.Speak();
}
```

#### C#
```
using System;

class Animal
{
    public virtual void Speak()
    {
        Console.WriteLine("Animal");
    }
}

class Dog : Animal
{
    public override void Speak()
    {
        Console.WriteLine("Dog");
    }

    static void Main()
    {
        Dog d = new Dog();
        d.Speak();
    }
}
```

---

### 10: Interfaces

#### C++ (abstract base class)
```
#include <iostream>

using namespace std;

class IFly
{
public:
    virtual void Fly() = 0;
};

class Bird : public IFly
{
public:
    void Fly()
    {
        cout << "Flying..." << endl;
    }
};

int main()
{
    Bird b;
    b.Fly();
}
```

#### C#
```
using System;

interface IFly
{
    void Fly();
}

class Bird : IFly
{
    public void Fly()
    {
        Console.WriteLine("Flying...");
    }

    static void Main()
    {
        Bird b = new Bird();
        b.Fly();
    }
}
```

---

### 11: Properties (instead of getters / setters)

#### C++
```
class Person
{
private:
    string name;

public:
    void SetName(string n)
    {
        name = n;
    }

    string GetName()
    {
        return name;
    }
};
```

#### C#
```
class Person
{
    public string Name { get; set; }
}

Or with logic:

class Person
{
    private int age;

    public int Age
    {
        set
        {
            if (value >= 0)
            {
                age = value;
            }
        }

        get
        {
            return age;
        }
    }
}
```

---

### 12: Constructors and Destructors

#### C++
```
#include <iostream>

using namespace std;

class File
{
public:
    File()
    {
        cout << "Open file" << endl;
    }

    ~File()
    {
        cout << "Close file" << endl;
    }
};

int main()
{
    File f;
}
```

#### C#
```
using System;

class FileResource : IDisposable
{
    public FileResource()
    {
        Console.WriteLine("Open file");
    }

    public void Dispose()
    {
        Console.WriteLine("Close file");
    }
}

class Program
{
    static void Main()
    {
        using (FileResource f = new FileResource())
        {
            // Work with file
        }
    }
}
```

---

### 13: Memory Management

#### C++
```
int* p = new int(5);
delete p;
```

#### C#
```
int x = 5; // Automatic memory management, no delete
```

---

### 14: Structs

#### C++
```
struct Point
{
    int x;
    int y;
};
```

#### C#
```
struct Point
{
    public int X;
    public int Y;
}
```

---

### 15: Enums

#### C++
```
enum Color
{
    Red,
    Green,
    Blue
};
```

#### C#
```
enum Color
{
    Red,
    Green,
    Blue
}
```

---

### 16: Collections

#### C++
```
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3};
    map<string, int> ages;
}
```

#### C#
```
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        List<int> nums = new List<int>() { 1, 2, 3 };
        Dictionary<string, int> ages = new Dictionary<string, int>();
    }
}
```

---

### 17: Exception Handling

#### C++
```
#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    try
    {
        throw runtime_error("Error!");
    }
    catch (const exception& e)
    {
        cout << e.what() << endl;
    }
}
```

#### C#
```
using System;

class Program
{
    static void Main()
    {
        try
        {
            throw new Exception("Error!");
        }
        catch (Exception ex)
        {
            Console.WriteLine(ex.Message);
        }
        finally
        {
            Console.WriteLine("Done");
        }
    }
}
```

---

### 18: Generics vs Templates

#### C++
```
template <typename T>

T Max(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
```

#### C#
```
class Utils
{
    public static T Max<T>(T a, T b) where T : IComparable
    {
        if (a.CompareTo(b) > 0)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
}
```

---

### 19: Delegates and Events

#### C++
```
#include <iostream>

using namespace std;

void Print(int x)
{
    cout << x << endl;
}

int main()
{
    Print(10);
}
```

#### C#
```
using System;

delegate void Printer(int x);

class Program
{
    static void Print(int x)
    {
        Console.WriteLine(x);
    }

    static void Main()
    {
        Printer p = new Printer(Print);
        p(10);
    }
}
```

---

### 20: Asynchronous Programming

#### C++
```
#include <future>
#include <iostream>

using namespace std;

int GetValue()
{
    return 42;
}

int main()
{
    future<int> result = async(GetValue);
    cout << result.get() << endl;
}
```

#### C#
```
using System;
using System.Threading.Tasks;

class Program
{
    static async Task<int> GetValueAsync()
    {
        await Task.Delay(1000);
        return 42;
    }

    static async Task Main()
    {
        int result = await GetValueAsync();
        Console.WriteLine(result);
    }
}
```

---

