using ConApp_02;

DateTime dt = DateTime.Now;
Console.WriteLine($"Is Weekend: {dt.IsWeekEnd()}");
Console.WriteLine($"Is Weekday: {dt.IsWeekDay()}");

//Console.WriteLine($"Is Weekend: {DateTimeExtensions.IsWeekEnd(dt)}");
//Console.WriteLine($"Is Weekday: {DateTimeExtensions.IsWeekDay(dt)}");


Console.ReadKey();
