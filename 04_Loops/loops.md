[Previous](../03_Control_flow/control_flow.md) Control Flow

[Next](../05_Arrays/arrays.md) Arrays

# Loops

Loops are a very important concept in programming. Loops help help do one thing for as many times as we want so far a condition is met.Loops saves time, reduce errors, and they make code more readable.

Imagine you want to do some task like print your name 100 times or count to 1000. It would get tiresome quickly. Loops Come to the rescue!!

Here are the types of loops in C:
* for loop
* while
* do while

## for loop
basic syntax of a for loop:

```C
for (initializeStatement; conditionCheck; incrementStatement)
{
	/* lines of code to perform */
}
```
**initializeStatement** is performed before the loop starts

**conditionCheck** defines a condition. the loop would go on so far this condition is true

**incrementStatement** is performed after every iteration of the looop.

Example:
Print 0 to 9 on the terminal
```C
#include<stdio.h>

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
```
Output
```
0
1
2
3
4
5
6
7
8
9

```

## while loop
Syntax:
```C
while (condition)
{
	/* Code to run */
}
```

A while loop runs so far the **condition** is ``true``
Example:
We are going to do the same task we use a ``for`` loop: Print from 0 to 9.

```c
#include<stdio.h>

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("d\n", i);
		i++;
	}
	return (0);
}
```
Output
```
0
1
2
3
4
5
6
7
8
9

```

***Note:*** Don't forget to increase the variable use in the condition, otherwise the loop would run forever.

## Do while
this type of loop is just like the while loop. the only difference is that it runs the block of code once before checking the condition.

Syntax:
```C
do {
	/* Code to run */
} while (condition);
```
Example:

```c
#include<stdio.h>

int main(void)
{
	int i;

	i = 0;
	do {
		printf("d\n", i);
		i++;
	} while (i < 10);
	return (0);
}
```
Output
```
0
1
2
3
4
5
6
7
8
9

```
***Note:*** Don't forget to increase the variable use in the condition, otherwise the loop would run forever.
## Break keyword
We have use the ``break`` keyword in the switch statement, where it is use to indicate the end of a case block and jump out of the ``switch`` statement.

In loops, the ``break`` statement is used to end and jump out of a loop.

Example:
```C
#include<stdio.h>

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		printf("%d\n", i);
	}
	return (0);
}
```
Output
```
0
1
2
3
4

```
the if statement in the for loop checks if the value of ``i`` is equal to 5. if that is the case, the loop breaks.

## Continue
The ``continue`` keyword is used to skip the current iteration, and continues to the next.
Example:
```C
#include<stdio.h>

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			continue;
		}
		printf("%d\n", i);
	}
	return (0);
}
```
Output
```
0
1
2
3
4
6
7
8
9

```
As we can see, it prints out numbers from 0 to 9 apart from 5.

[Previous](../03_Control_flow/control_flow.md) Control Flow

[Next](../05_Arrays/arrays.md) Arrays