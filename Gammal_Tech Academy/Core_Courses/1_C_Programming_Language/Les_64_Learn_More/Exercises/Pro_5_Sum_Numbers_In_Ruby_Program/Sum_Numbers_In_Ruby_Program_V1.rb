

/* >>> Sum Numbers In Java Program ( Version 5 ) <<< */

/* >>> A program that asks the user to enter a number and applies the sum of the numbers from 1 to this number in the language of Ruby. <<< */

number = 0;
sum_1 = 0;
sum_2 = 0;
puts 'Please enter a number: '
number = Integer(gets.chomp)

for i in 1..number do
  sum_1 += i;
end
puts sum_1

sum_2 = (number * (number + 1)) / 2;
puts sum_2