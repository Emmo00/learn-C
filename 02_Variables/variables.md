[Previous](../01_Hello_world/hello_world.md) Hello World

[Next](../02_Variables/operators.md) Operators
# 
* [Variables](./variables.md#variables)
	* [Identifiers](./variables.md#identifiers)
	* [Introduction to Data types in C](./variables.md#data-types)
		* [int](./variables.md#int)
		* [char](./variables.md#char)
			* [Escape Characters](./variables.md#escape-characters)
		* [float](./variables.md#float)
		* [double](variables.md#double)
	* [Printing Value of Variables](./variables.md#printing-values-of-variables)
		* [Format Specifier](./variables.md#format-specifiers)
	* [constants](./variables.md#constants)
# Variables
Variables in simple terms are like buckets we use to store something, in our case, data.
## Identifiers
Identifiers are basically the names we give to our variables, types, functions in our program. Identifiers must not be the same with any of the [Keywords](../00_Introduction/introduction.md#keywords) in C, in both name and case.

## Data Types
All Variables must be of a particular **Data Type**.

**Declaring** a variable is telling our program to create a variable. Declaring a variable follows this format.
```
data_type variable_name;
```
You can also Declare a variable and initialize it in the same line:
```
data_type variable_name = value;
```

There are four(4) basic Data Types in C:
1. int
1. char
1. float
1. double

## int
The int keyword is used to declare a variable of integer data type. It stores whole numbers with a size up to 4bytes. Integers are declared and initialized in C as follows
```C
int n;

n = 5;
```
The above can be done in one line
```C
int n = 5;
```

## char
The char keyword is used to declare a variable containing only single characters. These characters are usually only 1byte. They are declared as follows:
```C
char c;

c = 'A';
```
```
Note: values of the Character variables are surrounded by single quotes ('), double quotes won't work.
```
There is a special type of character called **Escape Characters**.
### Escape Characters
An escape character is a backslash \ followed by the character you want to insert which has a different interpretation than it normally would.

Example of Escape characters or Sequence :
| character | interpretation |
| --------- | ------------ |
| \n | New Line |
| \t | Horizontal Tab |
| \f | Form Feed(new page)|
| \\\ | Backslash |
| \b | Backspace |
And the list goes on....
Example:

```C
#include <stdio.h>

int main()
{
	printf("My name is Emmanuel");
	printf("I am a boy");
	return (0);
}
```
Running the above code would give:

```
My name is EmmanuelI am a boy
```
If we want to add a new line in-between the sentences, we use  the escape character '\n':

```C
#include <stdio.h>

int main()
{
	printf("My name is Emmanuel\n");
	printf("I am a boy");
	return (0);
}
```
The output would now be:

```
My name is Emmanuel
I am a boy
```
## float
The float Keyword is used to declare a variable of decimal value. usually 4bytes too.
Variables of float type can be declares as follows:
```C
float d;

d = 2.34;
```

## double
the double keyword is used to store fractional numbers with more precision and range than the float data type. It's size is 8bytes.:
```C
double r;

r = 4.3424;
```
## Printing Values of Variables
Printing the value of variables cannot be done with:  ``printf(variable);``. That is not going to work.

This is where we introduce **Format Specifiers**
### Format Specifiers
Format specifiers are used in the printf function to tell the compiler what type of variable you want to print. Format Specifiers are like plugs into the printf function, as you must fit the plug to its appropriate hole, you must use the right format specifier for the appropriate data type.
| Format Specifier | Data Type |
| -----------------: | --------- |
| %d | integers(int) |
| %c | characters(char) |
| %f | float(float) |
| %i | integer(int) |
| %p | [pointers]()(*TODO) |

Example:
```C
#include <stdio.h>

int main()
{
	int n;

	n = 5;
	printf("%d");
	return (0);
}
```
Output:
```
5
```
**Combine Variables and Text**:
```C
#include <stdio.h>

int main()
{
	int age;

	age = 5;
	printf("I am %d years old\n");
	return (0);
}
```
Output:
```
I am 5 years old
```

If we reassign a new value to a variable, the previous value will be over written.
Example:
```C
#include <stdio.h>

int main()
{
	int age;

	age = 5;
	printf("I am %d years old\n");
	age = 10;
	printf("I am now %d years old");
	return (0);
}
```
Output:
```
I am 5 years old
I am now 10 years old
```
But there are cases there we do not want to change the value either mistakenly or otherwise. This is where **Constants** come to the rescue.
## Constants
Constants in C are variables in which the values cannot be changed.

The ``const`` keyword is used to declare a constant.

Example:
```C
const int ten = 10;
const float g = 9.89;
```
Reassigning a constant variable would raise an error.
```C
#include <stdio.h>

int main()
{
	const int age = 5;

	printf("I am %d years old\n");
	age = 10; /* Error */
	printf("I am now %d years old");
	return (0);
}
```
It is common among programmers to declare a constant variable in uppercase.
```C
const float PI = 3.14;
```
# Operators
[Previous](../01_Hello_world/hello_world.md) Hello World

[Next](../02_Variables/operators.md) Operators