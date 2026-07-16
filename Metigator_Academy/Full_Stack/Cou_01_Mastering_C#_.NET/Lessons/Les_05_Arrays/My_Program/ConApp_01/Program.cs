


//string[] frinds = new string[5];
//frinds[0] = "fri_01";
//frinds[1] = "fri_02";
//frinds[2] = "fri_03";
//frinds[3] = "fri_04";
//frinds[4] = "fri_05";

//foreach (string frind in frinds)
//{
//    Console.WriteLine(frind);
//}


//-------------------------------------------------


//string[] frinds = new string[5]
//{
//    "fri_01",
//    "fri_02",
//    "fri_03",
//    "fri_04",
//    "fri_05",
//};

//foreach (string frind in frinds)
//{
//    Console.WriteLine(frind);
//}


//-------------------------------------------------


//string[] frinds = 
//{
//    "fri_01",
//    "fri_02",
//    "fri_03",
//    "fri_04",
//    "fri_05",
//};

//foreach (string frind in frinds)
//{
//    Console.WriteLine(frind);
//}


//-------------------------------------------------


//var frinds = new string[5]
//{
//    "fri_01",
//    "fri_02",
//    "fri_03",
//    "fri_04",
//    "fri_05",
//};

//foreach (string frind in frinds)
//{
//    Console.WriteLine(frind);
//}


//-------------------------------------------------


//var frinds = new string[5]
//{
//    "fri_01",
//    "fri_02",
//    "fri_03",
//    "fri_04",
//    "fri_05",
//};

//foreach (string frind in frinds)
//{
//    Console.WriteLine(frind);
//}


//-------------------------------------------------


//int[,] numbers = new int[2, 2]
//{
//    {1, 1},
//    {2, 2}
//};

//foreach (int num in numbers)
//{
//    Console.WriteLine(num);
//}



//-------------------------------------------------


//int[,] numbers =
//{
//    {1, 1, 1},
//    {2, 2, 2}
//};

//foreach (int num in numbers)
//{
//    Console.WriteLine(num);
//}


//-------------------------------------------------


//int[][] numbers = new int[][]
//{
//    new int[] {1, 2, 3},
//    new int[] {4, 5, 6},
//    new int[] {7, 8, 9}
//};

//foreach (int[] row in numbers)
//{
//    foreach (int num in row)
//    {
//        Console.WriteLine(num);
//    }
//}


//-------------------------------------------------


//int[][] numbers = new int[][]
//{
//    new int[] {1, 2, 3},
//    new int[] {4, 5, 6},
//    new int[] {7, 8, 9}
//};

//foreach (int[] row in numbers)
//{
//    foreach (int num in row)
//    {
//        Console.WriteLine(num);
//    }
//}


//-------------------------------------------------


string[] frinds = new string[5]
{
    "fri_01",
    "fri_02",
    "fri_03",
    "fri_04",
    "fri_05",
};

//var slice = frinds[..2];
var slice = frinds[2..];

foreach (var item in slice)
{
    Console.WriteLine(item);
}





Console.ReadKey();





