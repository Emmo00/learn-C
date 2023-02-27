[Previous](../07_Strings/strings.md) Strings

[Next](../09_Pointers/pointers.md) Pointers
#

* [Functions](./functions.md#functions) 
	* [Parameters and Return Values](./functions.md#parameters-and-return-values)
		* [Declaring a function](./functions.md#declaring-a-function)
		* [Calling a function](./functions.md#calling-a-function)
	* [Scope](./functions.md#scope)
	* [Intro to Recursion](./functions.md#recursion)

# Functions
Functions are an essential part of any programming language. They allow programmers to organize code into reusable and modular components, which can be called from various parts of a program. 

A function is a block of code that performs a specific task. It can take in inputs (parameters), performs some operations on them, and then can also return a value. Functions are used to reduce code duplication, improve code readability and maintainability.
# Parameters and Return Values
### Declaring a Function
The general syntax for declaring a function in C is:
```c
data-type function_name(parameters)
{
	// code
	//return statement
}
```
The ``data-type`` is the type of value the function would return. it can be any of the valid C data types, including [typedefs](TODO), [structs](TODO). ``void`` is used when the function doesn't return a value.

The ``function_name`` is the name of the function, and would be used to call the function from other parts of our code. It should be meaningful too.

The ``parameters`` are the inputs to the function. They can be of any valid data-type. If the function doesn't take any input, the parenthesis can be left empty or with ``void`` can be placed there

If the function ``data-type`` is not ``void`` then we have to put a return statement.

Now, enough talk, let's see some examples:

A function that do not return a value or take any arguments can be written like this:
```C
void print_github()
{
	printf("github\n");
}
```
A function that returns a value and takes input can be written like this:
```c
int add(int x, int y)
{
	int sum = x + y;
	return sum;
}
```
## Calling a Function
Declared functions are not executed immediately. They are "saved for later use", and will be executed when they are called.

To call a function, write the function's name followed by two parentheses () and a semicolon;. If the function takes inputs(parameters) the you have to put them in the correct order in the parenthesis.

If we declared our function before the main function, we can call it from other parts of our program. Example:
```C
#include <stdio.h>

void print_github()
{
	printf("GitHub\n");
}

int main()
{
	print_github();
	return (0);
}
```
Output:
```
GitHub
```

But if the function is declared after the main function we would have to add a **Function Prototype** to the top of the file.

The Function Prototype is basically just the first line we write then declaring a function. Example, for out ``print_github`` function, the function prototype is:
```c
void print_github();
```
and for our ``add`` function, the prototype is:
```c
int add(int x, int y);
```
or
```c
int add(int, int);
```
**NOTE**: don't forget the  semicolon at the end of the line.

Example:
```c
#include<stdio.h>

int add(int x, int y);

int main()
{
	int result = add(2, 4);
	printf("%d\n", result);
	return (0);
}

int add(int x, int y)
{
	int sum = x + y;
	return sum;
}
```
Output
```c
6
```
Noticed in the above example, we called the ``add`` function and gave the return value of the function to the variable ``result`` and printed it.
# Scope
The scope of a variable is the region of the program where it is visible and can be accessed. In C, variables declared inside a function are local to that function, which means they can only be accessed within that function. On the other hand, variables declared outside of any function are global, which means they can be accessed from any part of the program.

For example, in the following code, the variable ``num`` is local to the main function, while the variable ``count`` is global:
```c
#include <stdio.h>

int count = 0;

int main(){
int num = 5;
printf("The value of num is %d\n", num);
printf("The value of count is %d\n", count);
return 0;
}
```
# Recursion
Recursion is a technique in which a function calls itself. A recursive function consists of a base case and a recursive case. The base case is the simplest possible case that can be solved directly, while the recursive case is a more complex case that can be broken down into smaller subproblems.

For example, the following code shows a recursive function that calculates the factorial of a number:
```c
int factorial(int n){
if (n == 0){
return 1;
}
else{
return n * factorial(n - 1);
}
}
```
In this example, the base case is when n is equal to 0, in which case the function returns 1. The recursive case is when n is greater than 0, in which case the function calls itself with n - 1 as the argument and multiplies the result with n.

Recursion can be a powerful technique, but it can also lead to performance issues and stack overflows if not used properly. It's important to make sure that the base case is reachable.
#
[Previous](../07_Strings/strings.md) Strings

[Next](../09_Pointers/pointers.md) Pointers