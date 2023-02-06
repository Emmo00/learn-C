[Previous](../03_Arrays/arrays.md) Arrays

[Next](../04_1_More_Strings/more_strings.md) More Strings
#
* [Strings](./strings.md#strings)
	* [Declaration of Strings](./strings.md$declaration)
	* [Initializing a String](./strings.md#initializing)
	* [Strings as Arrays](./strings.md#strings-as-arrays)
		* [Accessing Characters in a string](./strings.md#accessing-string-characters)
		* [Modifying String Characters](./strings.md#modifying-string-characters)


# Strings
String in C programming is a sequence of characters terminated with a null character ‘\0’. Strings are defined as an array of characters. The difference between a character array and a string is the string is terminated with a unique character ‘\0’.
## Declaration 
Declaring a string is as simple as declaring a one-dimensional array. Below is the basic syntax for declaring a string.
```C
char str_name[size];
```
In the above syntax str_name is any name given to the string variable and size is used to define the length of the string, i.e the number of characters strings will store. 
Note: There is an extra terminating character which is the Null character (‘\0’) used to indicate the termination of a string that differs strings from normal character arrays. When a Sequence of characters enclosed in the double quotation marks is encountered by the compiler, a null character ‘\0’ is appended at the end of the string by default.
## Initializing
A string can be initialized in different ways. We will explain this with the help of an example. Below are the examples to declare a string with the name str and initialize it with “Learn C”.

4 Ways to Initialize a String in C
1. Assigning a string literal without size: String literals can be assigned without size. Here, the name of the string str acts as a pointer because it is an array.
```C
char str[] = "Learn C"; 
```
2. Assigning a string literal with a predefined size: String literals can be assigned with a predefined size. But we should always account for one extra space which will be assigned to the null character '\0'. If we want to store a string of size n then we should always declare a string with a size equal to or greater than n+1.
```C
char str[50] = "Learn C";
```
3. Assigning character by character with size: We can also assign a string character by character. But we should remember to set the end character as ‘\0’ which is a null character.
```C
char str[8] = { 'L', 'e', 'a', 'r', 'n', ' ', 'C','\0'};
```
4. Assigning character by character without size: We can assign character by character without size with the NULL character at the end. The size of the string is determined by the compiler automatically.
```C
char str[] = { 'L', 'e', 'a', 'r', 'n', ' ', 'C','\0'};
```
Let us now look at a sample program to get a clear understanding of declaring, initializing a string in C, and also how to print a string with its size. 
```C
// C program to illustrate strings

#include <stdio.h>

int main()
{
	// declare and initialize string
	char str[] = "Rishi";

	// print string
	printf("%s\n", str);
	
	return (0);
}
```
Output:
```
Rishi

Length of string str is 5
```
We can see in the above program that strings can be printed using normal printf statements just like we print any other variable. Unlike arrays, we do not need to print a string, character by character. 

*Note: The C language does not provide an inbuilt data type for strings but it has an access specifier “%s” which can be used to print and read strings directly.*


## Common String Functions in C

| Function Name      |     Description |
| -----------------:  | --------------- |
|strlen(string_name) |	Returns the length of string name.
|strcpy(s1, s2)	    |    Copies the contents of string s2 to string s1.
|strcmp(str1, str2)	|    Compares the first string with the second string. If strings are the same it returns 0.
|strcat(s1, s2)	    |    Concatenate s1 string with s2 string and the result is stored in the first string.
|strlwr()	        |    Converts string to lowercase.
|strupr()	        |    Converts string to uppercase.
|strstr(s1, s2)	    |    Find the first occurrence of s2 in s1.

We would look at some of the above Functions in the next Chapter: [More Strings](../04_1_More_Strings/more_strings.md)

## Strings As Arrays
As we have seen, Strings are just arrays of characters, with a null character indicating the end of the string. A string can be accessed and modified just like a normal array.
### Accessing String characters
We can access characters of a string using the index number. For Example:
```C
#include<stdio.h>

int main(void)
{
	char greet[] = "Hello World";

	printf("%c\n", greet[0]);
	return (0);
}
```
Output: 
```
H
```
***Note*: We use the character specifier '%c'when printing a single character**
### Modifying String characters
We can modify characters of a string, just like we can change values of elements in an array

Example:
```C
#include<stdio.h>

int main(void)
{
	char greet[] = "Hello World";

	greet[1] = 'a'; /* Change the second character from e to a*/
	printf("%s\n", greet); /*Hallo World*/
	return (0);
}
```
Output:
```
Hallo World
```
Strings can contain Special characters as seen above.
#
[Previous](../03_Arrays/arrays.md) Arrays

[Next](../04_1_More_Strings/more_strings.md) More Strings
