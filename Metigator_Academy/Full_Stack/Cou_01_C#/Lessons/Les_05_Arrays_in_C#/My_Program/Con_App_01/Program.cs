
string[] myFrinds = { "aaaaa", "bbbbb", "ccccc", "ddddd", "eeeee" };

string[] slice_1 = myFrinds[2..3];

for (int i = 0; i < slice_1.Length; i++)
{
    Console.WriteLine(slice_1[i]);
}


Console.ReadKey();