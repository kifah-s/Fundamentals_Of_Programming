



var amount = 1000;
var members = 4;

members = Reduce(members, 2);
var share = Distribute(amount, members);

Console.WriteLine(share);


Console.ReadKey();


static int Reduce(int members, int value)
{
    return members -= value;
}

static int Distribute(int amount, int members)
{
    try
    {
        return amount / members;
    }
    catch (Exception ex)
    {
        // In Case Exception is thrown
        Console.WriteLine($"Unexpected Error: {ex.Message}");
    }
    finally
    {
        // Cleanups.
    }

    return 0;
}


