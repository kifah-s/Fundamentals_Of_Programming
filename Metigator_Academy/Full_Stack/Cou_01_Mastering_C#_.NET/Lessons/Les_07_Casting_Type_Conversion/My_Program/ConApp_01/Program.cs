

//int number_Int = 100;
//long number_Long = number_Int;

// --------------------------------------------------------

//long number_Long = 1000;
//int number_Int = number_Long;

// --------------------------------------------------------

//long number_Long = 1000;
//int number_Int = (int)number_Long;

// --------------------------------------------------------

//long number_Long = 1000;
//if (number_Long <= int.MaxValue)
//{
//    int number_Int = (int)number_Long;
//}

// --------------------------------------------------------

//double number_double = 123.4;
//int number_int = (int)number_double;
//Console.WriteLine(number_int); // 123

// --------------------------------------------------------

//int x = 10;
//object obj;
//obj = x;

// --------------------------------------------------------

//object obj = 10;
//int y = (int)obj;
//Console.WriteLine(y);

// --------------------------------------------------------

//string stringValue = "10";
//int number = int.Parse(stringValue);
//Console.WriteLine(number);

// --------------------------------------------------------

//string stringValue = "ww10";
//int number = int.Parse(stringValue);
//Console.WriteLine(number);

// --------------------------------------------------------

//string stringValue = "ww10";
//if (int.TryParse(stringValue, out int number))
//{
//    Console.WriteLine(number);
//}
//Console.WriteLine("Invalid number.");

// --------------------------------------------------------

//string stringValue = "10";
//int number_int = Convert.ToInt32(stringValue);
//Console.WriteLine(number_int);

// --------------------------------------------------------

//var number = 255;
//var bytes = BitConverter.GetBytes(number);

//foreach (byte b in bytes)
//{
//    Console.WriteLine(b);
//}

//foreach (byte b in bytes)
//{
//    var binary = Convert.ToString(b, 2);
//    Console.WriteLine(binary);
//}

//foreach (byte b in bytes)
//{
//    var binary = Convert.ToString(b, 2).PadLeft(8, '0');
//    Console.WriteLine(binary);
//}

// --------------------------------------------------------

//var name = "kifah";
//char[] letters = name.ToCharArray();

////foreach (var item in letters)
////{
////    Console.WriteLine(item);
////}

//foreach (var item in letters)
//{
//    var ascii = Convert.ToInt32(item);
//    Console.WriteLine(ascii);
//}

// --------------------------------------------------------

//string[] hexValues = { "49", "73", "73", "61", "6D" };
//foreach (var item in hexValues)
//{
//    int value = Convert.ToInt32(item, 16);
//    //var stringValue = char.ConvertFromUtf32(value);
//    var ch = (char)value;
//    Console.WriteLine(ch);
//}



Console.ReadKey();





