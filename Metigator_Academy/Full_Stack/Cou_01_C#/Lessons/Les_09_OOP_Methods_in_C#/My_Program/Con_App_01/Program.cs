using Con_App_01;

clsEmployee[] employees = new clsEmployee[]
{
    new clsEmployee { firstName = "kifah", lastName = "saloum", wage = 5, loggedHours = 5 },
    new clsEmployee { firstName = "ashraf", lastName = "koraone", wage = 5, loggedHours = 5 }
};

foreach (var emp in employees)
{
    Console.WriteLine(emp.printSlip());
}

// ----------------------------------------------------------------------

//clsDemo.doSomthing();

//clsDemo demo_01 = new clsDemo();
//demo_01.doSomthing();

//clsDemo demo_01 = new clsDemo();
//Console.WriteLine(demo_01.doSomthing());

//clsDemo demo_01 = new clsDemo();
//demo_01.printAge(30);

//clsDemo demo_01 = new clsDemo();
//var age = 30;
//demo_01.printAgePlusYears(age);
//Console.WriteLine($"Age: {age}");

//clsDemo demo_01 = new clsDemo();
//var age = 30;
//age = demo_01.printAgePlusYears(age);
//Console.WriteLine($"Age: {age}");

//clsDemo demo_01 = new clsDemo();
//var age = 30;
//demo_01.printAgePlusYears(ref age);
//Console.WriteLine($"Age: {age}");

//clsDemo demo_01 = new clsDemo();
//int age;
//demo_01.printAgePlusYears(out age);
//Console.WriteLine($"Age: {age}");

//var numString = "123";
////var numString = "123e";
////int number;
//if (int.TryParse(numString, out int number))
//{
//    Console.WriteLine($"Parse from string to int is done.");
//}
//else
//{
//    Console.WriteLine($"Parse from string to int is not done.");
//}

//clsDemo demo = new clsDemo();
//demo.promotrIncrease(1000);
//demo.promotrIncrease(1000, "shahba");
//demo.promotrIncrease(1000, "shahba", "hotel");

//clsDemo demo = new clsDemo();
//Console.WriteLine(demo.isEven(10));

//clsDemo demo = new clsDemo();
//int[] arr = new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//var arr = new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//demo.printEven(new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9 });



//int[] arr = new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//var arr = new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//clsDemo.printEven(new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9 });


Console.ReadKey();

// ----------------------------------------------------------------------

