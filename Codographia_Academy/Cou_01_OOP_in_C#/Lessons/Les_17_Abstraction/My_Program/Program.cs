
Line line = new Line();
line.SayHello();


Console.ReadKey();


abstract class Shape
{
    abstract public void SayHello();
}

class Line : Shape
{
    public override void SayHello()
    {
        Console.WriteLine("Hello.");
    }
}