

IMove m_1 = new Vehicle();
m_1.Move();
m_1.Turn();

IDisplace m_2 = new Vehicle();
m_2.Move();




Vehicle m_3 = new Vehicle();

IMove mover = m_3 as IMove;
mover.Move();

IDisplace displacer = m_3 as IDisplace;
displacer.Move();


Console.ReadKey();

interface IMove
{
    void Move();

    void Turn()
    {
        Console.WriteLine("Turning.");
    }
}

interface IDisplace
{
    void Move();
}

class Vehicle : IMove, IDisplace
{
    void IMove.Move()
    {
        Console.WriteLine("IMove move.");
    }

    void IDisplace.Move()
    {
        Console.WriteLine("IDisplace move.");
    }
}