[Next: ⏩](../02_Variables/variables.md) VARIABLES  

[Previous ⏪](../00_introduction/introduction.md) INTRODUCTION

Now ▼

[Hello World ](./hello_world.md#hello-world)  

[Comments](./hello_world.md#comments)


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
Tip💡: It's not necessary to grasp everything immediately; with time, everything will become clear to you.
```

Line 1: `` #include <stdio.h>``.

* `stdio.h` is an header file. The full name of the header file `stdio.h` is "standard input and output header. Header files are used to add functionality to your code, and allow you use other people's code so you don't have to rewrite the same code.
* This line includes the stdio.h file which enables us to display the output of our code.
* For more information on the processes of header files, checkout [Preprocessor](../08_Preprocessor/)

Line 3: ``int main()``
* This is the function Declaration of the main function
* The main function is the entry point of every C program. It is the function that calls/activate every other C programs.
*  This is where code execution starts. 
```
Tip💡: A function is defined and enclosed in curly braces. The code lines are referred to as statements, and the statements within the curly braces ``{}`` are carried out during execution.
```
 More of this later in [Functions](../05_Functions/functions.md)

Line 4: ``// print hello world``

* This is a comment
* More on comments below.
  
## Comments
Comments are line(s) of code that are meant for other humans and hence, ignored by the compiler.

Why do we use Comments?
* Comments are used to explain what your code does.  It is a convention that comments should be used to explain what your code does and not how.
* Comments can be used to prevent the execution of some parts of the code. But this is arguably not a good practice.
  
## Importance of comments
* Comments used sparingly improves the readability of code.
* In certain situations where an individual is not acquainted with the programming language, comments provide them with insights into the program's logic.
* In some cases, Comments are used in debugging.
   
### Types of Comments in C
There are two(2) types of comments in C:
* **Single line comments**: These are comments that start with a double forward slash (//) and extend until the end of the line. Example:
```C
//This is a single line Comment
```
* **Multiline Comments**: These are enclosed between /* and */. Everything between these delimiters, reardless of line breaks, is considered a comment. It can be extended to a multiple lines. Example:
```C
/* This
	is a multiline
	comment */
```
Line 5: ``printf()`` 
* printf() is a function used to output/print text to the standard output (stdout). In our example it will output **Hello World**. The  defination of the printf() function is in the ``stdio.h`` file.
```
Tip💡: Every C statement ends with a semicolon ;
```

Line 6: ``return 0``
* Returns `0` to the caller of the function. In our case It means a successful compilation of the program.
* This ends the main() function.

And that's it.

One more thing...Betty. Remember that betty is a coding style checker. This tool is used to enforce a specific set of coding standards and guideline.

[Learn more about Betty](https://github.com/alx-tools/Betty)

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
1. Create the program in a file named `main.c`. You might choose any name you prefer, but it's essential to conclude the filename with the `.c ` extension, as is customary for all C programs.
2. In your terminal, type *betty main.c*  
   This checks your code and will throw out warning if any rules were flaunted or in cases of error.
3. Compile using GCC compiler, use the following command

```
gcc main.c -o hello
```

To run

```
./hello
```

Upon Successful compilation, You should see the ouput `Hello World` in your terminal.

 markdown
💡 Congratulations on running your first program.


[Previous:  ⏪](../00_introduction/introduction.md) INTRODUCTION

[Next: ⏩](../02_Variables/variables.md) VARIABLES