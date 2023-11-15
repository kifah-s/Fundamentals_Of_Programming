# Exercises ..

1 : Write a C++ program that defines two namespaces, "A" and "B".  
In the "A" namespace, define a function "foo" that prints the string "Hello from namespace A".  
In the "B" namespace, define a function "foo" that prints the string "Hello from namespace B".  
In the main function, call both "foo" functions and observe the output.

2 : Modify the previous program so that instead of calling the "foo" functions directly,  
you use the "using" directive to bring the "foo" functions into the main namespace.  
Then, call the "foo" functions as if they were defined in the main namespace.

3 : Write a C++ program that defines a namespace "math" with two functions, "square" and "cube",  
that return the square and cube of an integer, respectively.  
In the main function, read an integer from the user,  
and print its square and cube using the "math" namespace functions.

4 : Define a namespace "utilities" that contains a function "printArray" that takes an array of integers and its size as arguments, and prints the contents of the array.  
In the main function, define an array of integers and pass it to the "printArray" function using the namespace prefix.

5 : Write a C++ program that defines two namespaces, "base" and "derived".  
In the "base" namespace, define a class "Person" with a private member variable "name" and a public member function "setName" that sets the name.  
In the "derived" namespace, define a class "Employee" that inherits from the "Person" class and adds a private member variable "salary" and a public member function "setSalary" that sets the salary.  
In the main function, create an "Employee" object, set its name and salary, and print the values of its name and salary.
