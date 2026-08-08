


DateTime dt = DateTime.Now;
Console.WriteLine($"Date Now: {dt}");

dt = new DateTime(2022, 3, 1);
Console.WriteLine($"Date: {dt}");

DateTimeOffset dts = new DateTimeOffset();
Console.WriteLine($"Date Time Of Set: {dts}");

dts = DateTimeOffset.Now;
Console.WriteLine($"Date Time Of Set Now: {dts}");



Console.ReadKey();
