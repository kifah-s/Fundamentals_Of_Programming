


/*
var amount = Math.Cos(25);
Console.WriteLine(amount);
*/


// ----------------------------------------------------


/*
var s1 = "";
var s2 = "";
var s3 = s2 = s1 = "kifah";
Console.WriteLine($"s1: {s1}");
Console.WriteLine($"s2: {s2}");
Console.WriteLine($"s3: {s3}");
*/


// ----------------------------------------------------


/*
string s1 = null;
//if (s1 == null)
//{
//    s1 = "kifah";
//}
s1 = s1 ?? "kifah";
Console.WriteLine(s1);

s1 = s1 ?? "saloum";
Console.WriteLine(s1);
*/


// ----------------------------------------------------


/*
string s1 = null;
string s2 = s1?.ToUpper();

//if (s1 != null)
//{
//    s2 = s1.ToUpper();
//}
//else
//{
//    s2 = null;
//}

string s3 = s1 is null ? null : s1.ToUpper();

Console.WriteLine($"s2: {s2}");
*/


// ----------------------------------------------------

/*
Console.WriteLine("Hello.");

{
    Console.WriteLine("Hello.");
    Console.WriteLine("Hello.");
    Console.WriteLine("Hello.");
    Console.WriteLine("Hello.");
}
*/


// ----------------------------------------------------


/*
//var x = 10;
//++x;
//x++;
//Console.WriteLine(x);


//var y = 10;
//Console.WriteLine(++y);
//Console.WriteLine(y++);
*/


// ----------------------------------------------------


/*
object o = new object();

object myVariable;
myVariable = 10; 
myVariable = "kifah";
myVariable = true;


dynamic myVariable_02;
myVariable_02 = 10;
myVariable_02 = "kifah";
myVariable_02 = true;
*/


// ----------------------------------------------------


//var num = 3;
//switch (num)
//{
//    case 1:
//    case 3:
//    case 5:
//    case 7:
//    case 9:
//        Console.WriteLine("Odd.");
//        break;

//    case 2:
//    case 4:
//    case 6:
//    case 8:
//    case 10:
//        Console.WriteLine("Even.");
//        break;
//}



//object o = "kifah";
//switch (o)
//{
//    case int i:
//        Console.WriteLine($"It is INT.");
//        Console.WriteLine($"Sqr of {i} = {i * i}");
//        break;

//    case string i:
//        Console.WriteLine($"It is STRING.");
//        Console.WriteLine($"String is: {i}");
//        break;
//}



//bool isVip = true;
//switch (isVip)
//{
//    case bool i when i == true:
//        Console.WriteLine("Is True.");
//        break;

//    case bool i when i == false:
//        Console.WriteLine("Is False.");
//        break;
//}




//bool isVip = true;
//switch (isVip)
//{
//    case true:
//        Console.WriteLine("Is True.");
//        break;

//    case false:
//        Console.WriteLine("Is False.");
//        break;
//}



//var cardNumber = 13;
//var cardName = cardNumber switch
//{
//    1 => "Ace",
//    13 => "King",
//    12 => "Queen",
//    11 => "Jack",
//    _ => cardNumber.ToString()
//};
//Console.WriteLine(cardName);


// ----------------------------------------------------








Console.ReadKey();
