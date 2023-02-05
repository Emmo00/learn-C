[Previous](../README.md) Learn-C

[Next](../01_Hello_world/) Hello-World \
\
\
* [Introduction](./introduction.md#introduction)
	* [Requirements](./introduction.md#requirement)
	* [Setup](./introduction.md#setup)
		* Compiler
		* Test Editor
	* [Coding Style (Betty)](./introduction.md#coding-style-betty)
	* [Keywords](./introduction.md#keywords) 

\

# Introduction

C programming language is a procedural and general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972.

The C programming language offers various features and functionalities to the programmers. It includes low-level memory access, simple syntax, and a clean style. It makes the C programming language suitable for system programming like compiler development and operating system development.

C files have the file extension .c\
There are other file extensions in C like the header files, but we would talk about them later.

## Requirement

There are two(2) basic requirements to for coding in C:

* A text editor to write C code. Examples
	* Vim
	* Notepad etc.
* A compiler to translate the C code into a language that the computer will understand. Example: GCC

You could also use an IDE, which most times come with a text editor and compiler

## Setup

There is not much to setup, once you have your test editor and Compiler

To check if your compiler is installed, run the following command in your terminal

```
gcc --version
```
You should see the version of the compiler you are using

## Coding Style (Betty)
In this tutorial, we are going to be using the Betty Coding Style. To read more about the rules of this style, checkout [Betty Repository](https://github.com/holbertonschool/Betty/wiki).

And also a Video on how to install Betty in your Linux Based Computer [here](https://youtu.be/wDDKOOEPED0).
## KeyWords

There are 32 keywords in the C programming language.

Keywords are reserved words in the language which has its own meaning to the compiler and cannot be used as a user-defined [identifier](../02_Variables/variables.md#identifiers)

Keywords in C are as follows

|KeyWords |&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
|:-------:|:-------:|:-------:|:-------:|
| auto|break	|case|	char|
|const|	continue	|default	|do|
| double|	else|	enum|	extern|
|float|	for|	goto|	if|
|int	|long	|register|	return|
|short|	signed	|sizeof	|static|
|struct	|switch	|typedef	|union|
|unsigned	|void|	volatile|	while|

You can also checkout my repo showing examples for each keyword [here](TODO:KEYWORD_REPO)

Enough of the talk. In the Next Section, we are going to write some code.
\
\
\
\
[Previous](../README.md) Learn-C

[Next](../01_Hello_world/) Hello-World
