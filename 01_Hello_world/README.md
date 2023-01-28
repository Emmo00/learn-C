[Previous](../00_Introduction/README.md) Introduction

[Next](../02_Variables/README.md) Variables

# Hello World

In this Section, we are going to break down the C syntax

Look at the following code:

```C
#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}
```
Syntax Explained:

``
Note: you don't have to understand everything now, it'll all come to you.
``

Line 1: `` #include <stdio.h>``.

* stdio.h is an header file. Header files can be used to add functionality to your code, and allow you use other people's code so you don't have to rewrite thesame code
* this line includes the stdio.h file to our code
* checkout [Preprocessor](../08_Preprocessor/)

Line 3: ``int main()``
* This is the fuunction Declaration of the main function
* the main function is something that must be in every C program because, this is where the code execution starts.
```
Note: as a function, everything inside the curly braces ``{}`` is executed
```

Line 4: ``printf()`` 
* printf() is a function used to output/print text to the screen. In our example it will output "Hello World". it is declared on the ``stdio.h`` file.
```
Note: Every C statement ends with a semicolon ;
```

Line 5: ``return 0``
* this ends the main() function.

And that's it.

One more thing...Betty.

if we run this file through betty linter, it would through some error, so lets fix that. We can rewrite the code like this:

```C
#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main()
{
  printf("Hello World!");
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

[Previous](../00_Introduction/README.md) Introduction

[Next](../02_Variables/README.md) Variables