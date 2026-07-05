

int x = 10;
Console.WriteLine(x.IsGreaterByKifah(20));

string text = "10";
Console.WriteLine(text.IsNumberByKifah());

string welcomeMessage = "Hello and welcome.";
Console.WriteLine($"Length: {welcomeMessage.CountWordsByKifah()}");
Console.WriteLine(welcomeMessage);

Console.ReadKey();

static class ExtensionMethods
{
    public static bool IsGreaterByKifah(this int num1, int num2)
    {
        return (num1 > num2);
    }

    public static bool IsNumberByKifah(this string text)
    {
        return int.TryParse(text, out int num);
    }

    public static int CountWordsByKifah(this string statement)
    {
        if (!string.IsNullOrEmpty(statement))
        {
            string[] arr = statement.Split(' ');
            return arr.Length;
        }
        else
        {
            return 0;
        }
    }
}