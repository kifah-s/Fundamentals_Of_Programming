

Shape[] shapes = new Shape[4];
shapes[0] = new Shape();
shapes[1] = new Circle();
shapes[2] = new Triangle();
shapes[3] = new Line();


foreach (Shape shape in shapes)
{
    shape.Draw();
}



Console.ReadKey();


class Shape
{
    public virtual void Draw()
    {
        Console.WriteLine("Basic shape is created.");
    }
}

class Circle : Shape
{
    public override void Draw()
    {
        Console.WriteLine("Circle is created.");
    }
}

class Triangle : Shape
{
    public override void Draw()
    {
        Console.WriteLine("Triangle is created.");
    }
}

class Line : Shape
{
    public override void Draw()
    {
        Console.WriteLine("Line is created.");
    }
}