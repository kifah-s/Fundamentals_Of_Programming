Demo demo_01 = new Demo();

//demo_01.PrintDoSomething();


//Console.WriteLine(demo_01.ReturnNumber());


//var age = 25;
//demo_01.AgeIncrease(ref age);
//Console.WriteLine(age);


//int age;
//demo_01.AgeIncrease(out age);
//Console.WriteLine(age);


//string stringNumber = "12345.55";
//if (double.TryParse(stringNumber, out double number))
//{
//    Console.WriteLine($"Number: {number}");
//}
//else
//{
//    Console.WriteLine($"Invalid Number.");
//}


//var result = demo_01.IsEven(6);
//Console.WriteLine(result);


//int[] myArr = new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//demo_01.PrintEven(myArr);


int[] myArr = new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
Demo.PrintEven(myArr);




Console.ReadKey();




public class Demo
{
    //public void PrintDoSomething()
    //{
    //    Console.WriteLine("Do Something");
    //}


    //public int ReturnNumber()
    //{
    //    return 10;
    //}


    //public void AgeIncrease(ref int age)
    //{
    //    age = age + 10;
    //}


    //public void AgeIncrease(out int age)
    //{
    //    age = 25;
    //    age = age + 10;
    //}


    //public bool IsEven(int x)
    //{
    //    return x % 2 == 0;
    //}


    //public bool IsEven(int x) => x % 2 == 0;


    //public void PrintEven(int[] arr)
    //{
    //    bool IsEven(int x) => x % 2 == 0;

    //    foreach (int i in arr)
    //    {
    //        if (IsEven(i))
    //        {
    //            Console.Write(i + " ");
    //        }
    //    }
    //}

    public static void PrintEven(int[] arr)
    {
        bool IsEven(int x) => x % 2 == 0;

        foreach (int i in arr)
        {
            if (IsEven(i))
            {
                Console.Write(i + " ");
            }
        }
    }
}

/*
public static class Demo_02
{
    public static void PrintDoSomething()
    {
        Console.WriteLine("Do Something");
    }
}
*/