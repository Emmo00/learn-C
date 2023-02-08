[Previous](../03_Operators/operators.md) Operators

[Next](../05_Loops/loops.md) Loops
#
* [Control Flow](./control_flow.md#control-flow)
	* [if](./control_flow.md#if-statement)
	* [if else](./control_flow.md#else-statement)
	* [if else if else](./control_flow.md#else-if-statement)
	* [Switch](./control_flow.md#switch)
	* [goto](./control_flow.md#goto)
# Control Flow

Control flow is the order in which lines of code is executed. In C, the programs run from the first line to the list line in the file.

We can change the control flow of a program using Conditions and Loops.

## Conditions
Using logical operations see in the [Operators](../02_Variables/operators.md) Chapter, we can perform some task is some conditions a met.

The following are conditional statements in C:
* if
* else
* else if
* switch

## if Statement
The **If** statement is used to perform some tasks or lines of code, if a certain condition is true.

Syntax of the If statement:
```C
if (condition to check)
{
	/*lines of code or tasks to perform*/
}
```
Example:
```C
#include<stdio.h>

int main()
{
	int age;

	age = 16;
	if (age < 18)
	{
		printf("You are Underage");
	}
}
```
Output:
```
You are Underage
```
## Else Statement
The else Statement is used to specify a tasked to be performed if the condition in the if statement is ``false``.

Syntax of the If and Else statement:
```C
if (condition to check)
{
	/*lines of code or tasks to perform*/
} else 
{
	/*Some other task*/
}
```
Example:
```C
#include<stdio.h>

int main()
{
	int age;

	age = 19;
	if (age < 18)
	{
		printf("You are Underage");
	} else
	{
		printf("Welcome!!");
	}
}
```
Output:
```
Welcome!!
```
# Else if Statement
this is the combination of the else and if.

it is used to specify another condition to check if the condition in the if statement is false

Syntax of the If statement:
```C
if (condition to check)
{
	/*lines of code or tasks to perform*/
} else if (Another condition)
{
	/*lines of code if the second condition is true*/
} else
{
	/*if the two conditions are false*/
}
```
Example:
```C
#include<stdio.h>

int main()
{
	int number;

	number = 16;
	if (number < 0)
	{
		printf("number is negative");
	} else if (number > 0)
	{
		printf("number of positive");
	} else
	{
		printf("number is 0");
	}
}
```
Output:
```
number of positive
```
#
## Ternary Operator
the ternary operator can be used instead of the if, else statements

Syntax:
```C
(condition) ? ifConditionIsTrue : ifConditionIsFalse
```
Example, the following code is written with if and else:
```C
int age;

age = 19;
if (age < 18)
{
	printf("You are Underage");
} else
{
	printf("Welcome!!");
}
```
The Above can also be written with ternary operators:
```C
int age = 19;

(age < 18) ? printf("You are Underage") : printf("Welcome!!");
```
Output:
```
Welcome!!
```
#
## Switch
The switch statements is advantageous when writing code for a lot of conditions instead of using the if, else statements

Syntax of Switches:
```C
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
```
Example:
```C
#include<stdio.h>

int main(void)
{
	int day = 4;
	switch (day)
	{
	case 1:
		printf("Monday");
		break;
	case 2:
    	printf("Tuesday");
    	break;
  	case 3:
    	printf("Wednesday");
    	break;
  	case 4:
    	printf("Thursday");
    	break;
  	case 5:
    	printf("Friday");
    	break;
  	case 6:
    	printf("Saturday");
    	break;
  	case 7:
    	printf("Sunday");
    	break;
	}
	return (0);
}
```
Output 
```
Thursday
```

the ``break`` keyword in the switch statement is used to tell the c compiler where the case block ends

the ``default`` keyword is used to specify a block of code to be performed if none of the cases match.

Example:
```C
int day = 4;

switch (day)
{
case 6:
    printf("Today is Saturday");
    break;
case 7:
    printf("Today is Sunday");
    break;
default:
    printf("Weekday, not yet weekend");
}
```
Output
```
Weekday, not yet weekend
```
## goto
The goto keyword is used to transfer the flow of the code execution to a labeled part of the code.
Example:
```C
#include<stdio.h>

int main(void) 
{
	int x = 0;

	if (x == 4)
	{
		goto end;
	}
	printf("x is not 4");
	end:
	return (0);
}
```
Output:
```
x is not 4
```
if the value of x was 4 then this program would have jumped to the return line, without printing anything.
#
[Previous](../03_Operators/operators.md) Operators

[Next](../05_Loops/loops.md) Loops