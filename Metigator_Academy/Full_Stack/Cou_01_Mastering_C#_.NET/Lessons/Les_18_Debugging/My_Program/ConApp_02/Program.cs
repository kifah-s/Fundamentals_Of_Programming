


var f = ConvertCelsiusToFehrenhite(0);
Console.WriteLine($"{0}C = {f}F.");

var c = ConvertFehrenhiteToCelsius(32);
Console.WriteLine($"{32}F = {c}C.");


Console.ReadKey();

static decimal ConvertCelsiusToFehrenhite(decimal cel)
{
    var fehrenhite = 0m;
    fehrenhite = (cel * 9 / 5) + 32;
    return fehrenhite;
}


static decimal ConvertFehrenhiteToCelsius(decimal feh)
{
    var celsius = 0m;
    celsius = (feh - 32) * 5 / 9;
    return celsius;
}


