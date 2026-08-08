using ConApp_02;

DateTime dt = DateTime.Now;
Console.WriteLine($"Date Time: {dt}");
Console.WriteLine($"Is Weekend: {DateTimeHelper.IsWeekEnd(dt)}");
Console.WriteLine($"Is Weekday: {DateTimeHelper.IsWeekDay(dt)}");


Console.ReadKey();
