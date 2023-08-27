

/* >>> Sum Numbers In Java Program ( Version 4 ) <<< */

/* >>> A program that asks the user to enter a number and applies the sum of the numbers from 1 to this number in the language of C#. <<< */

using System;

class Program {
  public static void Main (string[] args) {

    int number = 0;
    int sum_1 = 0;
    int sum_2 = 0;
    Console.WriteLine ("Please enter a number: ");
    int.TryParse(Console.ReadLine(), out number);

    for (int i = 1; i <= number; i++)
        {
            sum_1 = sum_1 + i;
        }
    Console.WriteLine (sum_1);

    sum_2 = (number * (number + 1)) / 2;
    Console.WriteLine (sum_2);
    
  }
}