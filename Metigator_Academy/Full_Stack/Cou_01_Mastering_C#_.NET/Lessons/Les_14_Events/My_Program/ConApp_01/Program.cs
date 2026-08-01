



using ConApp_01;

Stock stock = new Stock("Amazon");
stock.Price = 100;

stock.OnPriceChanged += (Stock stock, decimal oldPrice) =>
{
    string result = "";
    if (stock.Price > oldPrice)
    {
        Console.ForegroundColor = ConsoleColor.Green;
        result = "UP";
    }
    else if (stock.Price < oldPrice)
    {
        Console.ForegroundColor = ConsoleColor.Red;
        result = "Down";
    }
    else
    {
        Console.ForegroundColor = ConsoleColor.Gray;
    }

    Console.WriteLine($"{stock.Name} : {stock.Price} : {result}");
};


/*
void Stock_OnPriceChanged(Stock stock, decimal oldPrice)
{
    string result = "";
    if (stock.Price > oldPrice)
    {
        Console.ForegroundColor = ConsoleColor.Green;
        result = "UP";
    }
    else if (stock.Price < oldPrice)
    {
        Console.ForegroundColor = ConsoleColor.Red;
        result = "Down";
    }
    else
    {
        Console.ForegroundColor = ConsoleColor.Gray;
    }

    Console.WriteLine($"{stock.Name} : {stock.Price} : {result}");
}
*/

stock.ChangeStockPriceBy(0.05m);
stock.ChangeStockPriceBy(-0.02m);
stock.ChangeStockPriceBy(-0.00m);


Console.ReadKey();


