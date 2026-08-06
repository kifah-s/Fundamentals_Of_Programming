
using System.Collections;

FiveIntegers ints = new FiveIntegers(1, 2, 3, 4, 5);

foreach (int i in ints)
{
    Console.WriteLine(i);
}


Console.ReadKey();

public class FiveIntegers : IEnumerable
{
    int[] _Values;

    public FiveIntegers(int n1, int n2, int n3, int n4, int n5)
    {
        _Values = new[] { n1, n2, n3, n4, n5 };
    }

    public IEnumerator GetEnumerator()
    {
        foreach (int i in _Values)
        {
            yield return i;
        }
    }
}