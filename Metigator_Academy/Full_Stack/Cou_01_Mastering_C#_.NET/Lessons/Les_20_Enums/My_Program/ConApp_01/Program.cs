


//Console.WriteLine(Month.APR);
//Console.WriteLine((int)Month.APR);
//Console.WriteLine((Month)2);

foreach (var mon in Enum.GetNames(typeof(Month)))
{
    Console.WriteLine($"{mon}: {(int)Enum.Parse(typeof(Month), mon)}");
}

Console.WriteLine("__________________________________________________");

foreach (var mon in Enum.GetValues(typeof(Month)))
{
    Console.WriteLine($"{mon.ToString()}: {(int)mon}");
}






Console.ReadKey();





enum Month : int
{
    JNN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
}
