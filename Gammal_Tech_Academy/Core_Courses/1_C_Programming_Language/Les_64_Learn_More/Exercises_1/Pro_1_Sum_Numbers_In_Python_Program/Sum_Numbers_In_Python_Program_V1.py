

/* >>> Sum Numbers In Python Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number and applies the sum of the numbers from 1 to this number in the language of python. <<< */


number = (0)
sum_1 = (0)
sum_2 = (0)

number = int(input("\nEnter an number: "))


for i in range(1, number + 1):
    sum_1 = sum_1 + i
print("sum 1 = " ,sum_1)

sum_2 = (number * (number + 1)) / 2
print("sum 2 = " ,sum_2)