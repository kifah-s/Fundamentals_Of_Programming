

/* >>> Sum Numbers In Java Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a number and applies the sum of the numbers from 1 to this number in the language of java. <<< */

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int number = 0;
    int sum_1 = 0;
    int sum_2 = 0;

    System.out.println("\nPlease enter a number: ");
    number = scanner.nextInt();
    
    for (int i = 1; i <= 5; i++)
    {
      sum_1 = sum_1 + i;
    }
    System.out.println(sum_1);

    sum_2 = (number * (number + 1)) / 2;
    System.out.println(sum_2);
    
  }
}