using System;
using System.Collections.Generic;

namespace My_Program
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<Recipe> recipes = new List<Recipe>
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

public abstract class Recipe
{
    public abstract string Prepare();
}

public class Pizza : Recipe
{
    public override string Prepare()
    {
        return "MAKE PIZZA.";
    }
}

public class Falafel : Recipe
{
    public override string Prepare()
    {
        return "MAKE FALAFEL.";
    }
}

public class Spaghetti : Recipe
{
    public override string Prepare()
    {
        return "MAKE SPAGHETTI.";
    }
}