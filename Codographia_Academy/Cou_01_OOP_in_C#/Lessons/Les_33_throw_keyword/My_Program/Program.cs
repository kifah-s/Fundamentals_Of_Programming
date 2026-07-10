


int[] number = { 1, 2, 3, 4, 5 };

GetValueFromArray(number, 10);


Console.ReadKey();

static void GetValueFromArray(int[] arr, int index)
{
    try
    {
        Console.WriteLine(arr[index]);
    }
    catch (IndexOutOfRangeException ex)
    {
        throw new ArgumentOutOfRangeException("Out Of Range Exception");
    }
}