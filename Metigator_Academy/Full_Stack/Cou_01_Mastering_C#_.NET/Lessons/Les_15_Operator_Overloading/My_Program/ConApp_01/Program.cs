



Money m1 = new Money(10);
Money m2 = new Money(20);

Console.WriteLine($"Money m1: {m1.Amount}");
Console.WriteLine($"Money m2: {m2.Amount}");

Money m3 = m1 + m2;
Console.WriteLine($"Money m3: {m3.Amount}");

Money m4 = m1 - m2;
Console.WriteLine($"Money m4: {m4.Amount}");

Money m5 = m1 * m2;
Console.WriteLine($"Money m5: {m5.Amount}");

Money m6 = m1 / m2;
Console.WriteLine($"Money m6: {m6.Amount}");

Console.WriteLine($"m1 > m2: {m1.Amount > m2.Amount}");

Console.WriteLine($"m1 < m2: {m1.Amount < m2.Amount}");

Console.WriteLine($"m1 >= m2: {m1.Amount >= m2.Amount}");

Console.WriteLine($"m1 <= m2: {m1.Amount <= m2.Amount}");

Console.WriteLine($"m1 == m2: {m1.Amount == m2.Amount}");

Console.WriteLine($"m1 != m2: {m1.Amount != m2.Amount}");

Money m7 = ++m1;
Console.WriteLine($"Money m7: {m7.Amount}");

Money m8 = --m1;
Console.WriteLine($"Money m8: {m8.Amount}");

Console.WriteLine($"Money m1++: {(++m1).Amount}");

Console.WriteLine($"Money m1--: {(--m1).Amount}");



Console.ReadKey();





public class Money
{
    private decimal _Amount;

    public decimal Amount => _Amount;

    public Money(decimal value)
    {
        _Amount = Math.Round(value, 2);
    }

    public static Money operator +(Money m1, Money m2)
    {
        var value = m1.Amount + m2.Amount;
        return new Money(value);
    }

    public static Money operator -(Money m1, Money m2)
    {
        return new Money(m1.Amount - m2.Amount);
    }

    public static Money operator *(Money m1, Money m2)
    {
        return new Money(m1.Amount * m2.Amount);
    }

    public static Money operator /(Money m1, Money m2)
    {
        return new Money(m1.Amount / m2.Amount);
    }

    public static bool operator >(Money m1, Money m2)
    {
        return (m1.Amount > m2.Amount);
    }

    public static bool operator <(Money m1, Money m2)
    {
        return (m1.Amount < m2.Amount);
    }

    public static bool operator >=(Money m1, Money m2)
    {
        return (m1.Amount >= m2.Amount);
    }

    public static bool operator <=(Money m1, Money m2)
    {
        return (m1.Amount <= m2.Amount);
    }

    public static bool operator ==(Money m1, Money m2)
    {
        return (m1.Amount == m2.Amount);
    }

    public static bool operator !=(Money m1, Money m2)
    {
        return (m1.Amount != m2.Amount);
    }

    public static Money operator ++(Money m)
    {
        var value = m.Amount;
        return new Money(++value);
    }

    public static Money operator --(Money m)
    {
        var value = m.Amount;
        return new Money(--value);
    }
}