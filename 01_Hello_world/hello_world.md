[Previous](../00_introduction/introduction.md) Introduction

[Next](../02_Variables/variables.md) Variables

* [Hello World](./hello_world.md#hello-world)
	* My First Program
	* [Comments](./hello_world.md#comments)

# Hello World

In this Section, we are going to break down the C syntax

Look at the following code:

```C
#include <stdio.h>

int main() {
	//print "Hello World!"
	printf("Hello World!\n");
	return 0;
}
```
### Syntax Explained:

```
Note: you don't have to understand everything now, it'll all come to you.
```

Line 1: `` #include <stdio.h>``.

* stdio.h is an header file. Header files can be used to add functionality to your code, and allow you use other people's code so you don't have to rewrite thesame code
* this line includes the stdio.h file to our code
* checkout [Preprocessor](../08_Preprocessor/)

Line 3: ``int main()``
* This is the function Declaration of the main function
* the main function is something that must be in every C program because, this is where the code execution starts.
```
Note: as a function, everything inside the curly braces ``{}`` is executed. More later in [Functions]()
```
 More later in [Functions](../05_Functions/functions.md)

Line 4: this is a comment
## Comments
Comments are lines of code that are meant for other humans and hence, ignored by the compiler.

Why do we use Comments?
* Comments are used to explain what your code does. Comments improve the readability of code. Comments should be used to explain what your code does and not how.
* Comments can be used to prevent the execution of some parts of the code. But this is not a good practice.
### Types of Comments in C
there are two(2) types of comments in C:
* **Single line comments**: These are comments that start with a double forward slash (//) and extend to the end of the line. Example:
```C
//This is a Comment
```
* **Multiline Comments**: these type of comments start with a slash and asterick and end with a asterick then a slash. It can be extended to a multiple lines. Example:
```C
/* This
	is a multiline
	comment */
```
Line 5: ``printf()`` 
* printf() is a function used to output/print text to the screen. In our example it will output "Hello World". it is declared on the ``stdio.h`` file.
```
Note: Every C statement ends with a semicolon ;
```

Line 6: ``return 0``
* this ends the main() function.

And that's it.

One more thing...Betty.

if we run this file through the betty linter, it would throw some error, so lets fix that. We can rewrite the code like this:

```C
#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main()
{
	printf("Hello World!\n");
	return (0);
}
```

## Compile and Run
Save the Above code in a file ``main.C``

To compile a C file using GCC compiler, use the following command

``gcc main.c -o hello``

And then to run it

``./hello``

You should see the text "Hello World" in your terminal.

[Previous](../00_introduction/introduction.md) Introduction

[Next](../02_Variables/variables.md) Variables