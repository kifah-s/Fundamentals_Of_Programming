

/* >>> Sum Numbers In Java Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter a number and applies the sum of the numbers from 1 to this number in the language of C++. <<< */

#include <iostream>

int main()
{
  int number = 0;
  int sum_1 = 0;
  int sum_2 = 0;

  std::cout << "\nPlease enter a number: ";
  std::cin >> number;

  for (int i = 1; i <= 5; i++)
  {
    sum_1 = sum_1 + i;
  }
  std::cout << sum_1 << "\n";

  sum_2 = (number * (number + 1)) / 2;
  std::cout << sum_2 << "\n";
}