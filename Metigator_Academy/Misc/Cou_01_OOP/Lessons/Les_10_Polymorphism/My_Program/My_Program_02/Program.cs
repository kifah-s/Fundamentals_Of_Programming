using System;
using System.Collections.Generic;

namespace My_Program_02
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<IRecipe> recipes = new List<IRecipe>
            {
                new Pizza(),
                new Falafel(),
                new Spaghetti(),
            };

            foreach (var recipe in recipes)
            {
                Console.WriteLine(recipe.Prepare());
            }

            Console.ReadKey();
        }
    }
}

public interface IRecipe
{
    string Prepare();
}

public class Pizza : IRecipe
{
    public string Prepare()
    {
        return "MAKE PIZZA.";
    }
}

public class Falafel : IRecipe
{
    public string Prepare()
    {
        return "MAKE FALAFEL.";
    }
}

public class Spaghetti : IRecipe
{
    public string Prepare()
    {
        return "MAKE SPAGHETTI.";
    }
}