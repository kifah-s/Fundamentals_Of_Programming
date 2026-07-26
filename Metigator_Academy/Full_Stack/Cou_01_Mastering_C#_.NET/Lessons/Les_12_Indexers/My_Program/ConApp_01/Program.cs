using ConApp_01;

//IP ip_01 = new IP(112, 114, 55, 33);
//Console.WriteLine(ip_01.Address);

// ------------------------------------------------


IP ip_02 = new IP(112, 114, 55, 33);
int firstSegment = ip_02[0];

Console.WriteLine(ip_02.Address);
Console.WriteLine(firstSegment);


// ------------------------------------------------


Console.ReadKey();


