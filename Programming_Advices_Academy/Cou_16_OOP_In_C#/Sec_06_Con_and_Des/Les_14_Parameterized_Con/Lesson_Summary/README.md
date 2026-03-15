## Lesson Summary.

---

#### Parameterized Constructor

In C#, a constructor can also accept parameters. It is called a parameterized constructor. For example,
```
using System;

namespace Constructor
{
  class Car
  {   
    string brand;
    int price;

    // parameterized constructor
    Car(string theBrand, int thePrice)
    {
      brand = theBrand;
      price = thePrice;
    }
  
    static void Main(string[] args)
    {
      // call parameterized constructor
      Car car1 = new Car("Bugatti", 50000);

      Console.WriteLine("Brand: " + car1.brand);
      Console.WriteLine("Price: " + car1.price);

      Console.ReadLine();
     
    }
  }
}
```

Output
```
Brand: Bugatti
Price: 50000
```

In the above example, we have created a constructor named Car(). The constructor takes two parameters: theBrand and thePrice.

Notice the statement,
```
Car car1 = new Car("Bugatti", 50000);
```

Here, we are passing the two values to the constructor.

The values passed to the constructor are called arguments. We must pass the same number and type of values as parameters.