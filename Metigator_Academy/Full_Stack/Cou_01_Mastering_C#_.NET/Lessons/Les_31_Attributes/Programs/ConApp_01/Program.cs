

var p_01 = new PrintMessage();
p_01.Print_01();
p_01.Print_02();


Console.ReadKey();

public class PrintMessage
{
    //[Obsolete("This function is old.", true)]
    [Obsolete("This function is old.", false)]
    public void Print_01()
    {
        Console.WriteLine("Hello, World - 01");
    }

    public void Print_02()
    {
        Console.WriteLine("Hello, World - 02");
    }
}