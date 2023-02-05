[Previous](../03_Arrays/arrays.md) Arrays

[Next](../05_Control_flow/control_flow.md) Control_flow
#
* [Strings](./strings.md#strings)
* [Declaration of Strings](./strings.md$declaration)
* [Initializing a String](./strings.md#initializing)
* [Append a character to a String in c](./strings.md#appendment)
* [strncat() function in C](./strings.md#strncat())
* [strpbrk() in C](./strings.md#strpbrk())
* [strcoll() in C](./strings.md#strcoll())
* [Finding the Length of String](./strings.md#length)

# Strings
String in C programming is a sequence of characters terminated with a null character ‘\0’. Strings are defined as an array of characters. The difference between a character array and a string is the string is terminated with a unique character ‘\0’.
## Declaration of String
Declaring a string is as simple as declaring a one-dimensional array. Below is the basic syntax for declaring a string.

char str_name[size];
In the above syntax str_name is any name given to the string variable and size is used to define the length of the string, i.e the number of characters strings will store. 
Note: There is an extra terminating character which is the Null character (‘\0’) used to indicate the termination of a string that differs strings from normal character arrays. When a Sequence of characters enclosed in the double quotation marks is encountered by the compiler, a null character ‘\0’ is appended at the end of the string by default.
## Initialization of  String
A string can be initialized in different ways. We will explain this with the help of an example. Below are the examples to declare a string with the name str and initialize it with “GeeksforGeeks”.

4 Ways to Initialize a String in C
1. Assigning a string literal without size: String literals can be assigned without size. Here, the name of the string str acts as a pointer because it is an array.

char str[] = "GeeksforGeeks"; 
2. Assigning a string literal with a predefined size: String literals can be assigned with a predefined size. But we should always account for one extra space which will be assigned to the null character. If we want to store a string of size n then we should always declare a string with a size equal to or greater than n+1.

char str[50] = "GeeksforGeeks";
3. Assigning character by character with size: We can also assign a string character by character. But we should remember to set the end character as ‘\0’ which is a null character.

char str[14] = { 'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};
4. Assigning character by character without size: We can assign character by character without size with the NULL character at the end. The size of the string is determined by the compiler automatically.

char str[] = { 'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};

Let us now look at a sample program to get a clear understanding of declaring, initializing a string in C, and also how to print a string with its size. 
```C
// C program to illustrate strings

#include <stdio.h>
#include <string.h>

int main()
{
	// declare and initialize string
	char str[] = "Rishi";

	// print string
	printf("%s\n", str);
	
	int length = 0;
	length = strlen(str);
	
	// displaying the length of string
	printf("Length of string str is %d", length);

	return 0;
}
```
Output:
Rishi

Length of string str is 5

We can see in the above program that strings can be printed using normal printf statements just like we print any other variable. Unlike arrays, we do not need to print a string, character by character. 

*Note: The C language does not provide an inbuilt data type for strings but it has an access specifier “%s” which can be used to print and read strings directly.*

How to Read a String From User?
```C
// C program to read string from user
#include<stdio.h>
	
int main()
{
	// declaring string
	char str[50];
		
	// reading string
	scanf("%s",str);
		
	// print string
	printf("%s",str);
	
	return 0;
}
```
Input:
RishiJoshi
Output:
RishiJoshi

How to Read a Line of Text in C?

We can use the fgets() function to read a line of string and gets() to read characters from the standard input  (stdin) and store them as a C string until a newline character or the End-of-file (EOF) is reached.

For Example:
```C
// C program to illustrate
// fgets()
#include <stdio.h>
#define MAX 50
int main()
{
	char str[MAX];

	// MAX Size if 50 defined
	fgets(str, MAX, stdin);

	printf("String is: \n");

	// Displaying Strings using Puts
	puts(str);

	return 0;
}
```
Input:
RishiJoshi

Output:
String is:
RishiJoshi

Most Used Functions in C  Strings:

Function Name           Description

strlen(string_name) 	Returns the length of string name.
strcpy(s1, s2)	        Copies the contents of string s2 to string s1.
strcmp(str1, str2)	    Compares the first string with the second string. If strings are the same it returns 0.
strcat(s1, s2)	        Concat s1 string with s2 string and the result is stored in the first string.
strlwr()	            Converts string to lowercase.
strupr()	            Converts string to uppercase.
strstr(s1, s2)	        Find the first occurrence of s2 in s1.

## Append a character to a String in C

Given a string str and a character ch, this article tells about how to append this character ch to this string str at the end.
Examples: 
 

Input: str = "Geek", ch = 's'
Output: "Geeks"

Input: str = "skee", ch = 'G'
Output: "skeeG"
Approach: 
 

1. Get the string str and character ch
2. Use the strncat() function to append the character ch at the end of str. strncat() is a predefined function used for string handling. string.h is the header file required for string functions.

Syntax: 
```C
char *strncat(char *dest, const char *src, size_t n)
```
Parameters: This method accepts the following parameters: 
 

dest: the string where we want to append.
src: the string from which ‘n’ characters are going to append.
n: represents the maximum number of character to be appended. size_t is an unsigned integral type.

3. Print or return the appended string str.

Below is the implementation of the above approach:
```C


// C program to Append a Character to a String
 
#include <stdio.h>
#include <string.h>
 
int main()
{
    // declare and initialize string
    char str[6] = "Geek";
 
    // declare and initialize char
    char ch = 's';
 
    // print string
    printf("Original String: %s\n", str);
    printf("Character to be appended: %c\n", ch);
 
    // append ch to str
    strncat(str, &ch, 1);
 
    // print string
    printf("Appended String: %s\n", str);
 
    return 0;
}
```
Output: 
Original String: Geek


Character to be appended: s


Appended String: Geeks

##  strncat() function in C


In C, strncat() is a predefined function used for string handling. *string.h* is the header file required for string functions.
This function appends not more than n characters from the string pointed to by src to the end of the string pointed to by dest plus a terminating Null-character. The initial character of the string(src) overwrites the Null-character present at the end of a string(dest). Thus, the length of the string(dest) becomes strlen(dest)+n. But, if the length of the string(src) is less than n, only the content up to the terminating null-character is copied and the length of the string(dest) becomes strlen(src) + strlen(dest).
The behavior is undefined if –

The strings overlap.
The dest array is not large enough to append the contents of src.
Syntax: 
```C
char *strncat(char *dest, const char *src, size_t n)
```

Parameters: This method accepts the following parameters: 

dest: the string where we want to append.
src: the string from which ‘n’ characters are going to append.
n: represents a maximum number of characters to be appended. size_t is an unsigned integral type.
Return Value: The strncat() function shall return the pointer to the string(dest). 

Application 
Given two strings src and dest in C, we need to append ‘n’ character from src to dest, let’s say n=5.

Examples:  

Input:  src = "world"
        dest = "Hello"
Output: "Hello world"

Program:
```C

// C program demonstrate functionality of strncat()
#include <stdio.h>
#include <string.h>

int main()
{

// Take any two strings
char src[50] = "efghijkl";
char dest[50]= "abcd";

// Appends 5 character from src to dest
strncat(dest, src, 5);
	
// Prints the string
printf("Source string : %s\n", src);
printf("Destination string : %s", dest);
	
return 0;
}
```

Output: 

Source string : efghijkl
Destination string : abcdefghi

How strncat() is different from strcat() ?

It is recommended by many of the programmers that strncat() is safe as compared to strcat() because strcat() does not check for the size of the copied data, and copies until it gets to a null terminator, it might cause a buffer overflow while strncat() check for the size of the copied data, and will copy only ‘n’ bytes.

Program:
```C

// C,C++ program demonstrate difference between
// strncat() and strcat()
#include <stdio.h>
#include <string.h>

int main()
{

// Take any two strings
char src[50] = "rishi";
char dest1[50] = "joshi";
char dest2[50] = "hey";

printf("Before strcat() function execution, ");
printf("destination string : %s\n", dest1);
	
// Appends the entire string of src to dest1
strcat(dest1, src);

// Prints the string
printf("After strcat() function execution, ");
printf("destination string : %s\n", dest1);

printf("Before strncat() function execution, ");
printf("destination string : %s\n", dest2);
	
// Appends 3 characters from src to dest2
strncat(dest2, src, 3);
	
// Prints the string
printf("After strncat() function execution, ");
printf("destination string : %s\n", dest2);
	
return 0;
}

```

Output:

Before strcat() function execution, destination string : joshi
After strcat() function execution, destination string : joshirishi
Before strncat() function execution, destination string : hey
After strncat() function execution, destination string : heyris

## strpbrk() in C

This function finds the first character in the string s1 that matches any character specified in s2 (It excludes terminating null-characters).

Syntax :

char *strpbrk(const char *s1, const char *s2)

Parameters :
s1 : string to be scanned.
s2 : string containing the characters to match.

Return Value :
It returns a pointer to the character in s1 that 
matches one of the characters in s2, else returns NULL.

```C
// C code to demonstrate practical application
// of strpbrk
#include <stdio.h>
#include <string.h>

// Driver function
int main()
{
	// Initializing victory string
	char s1[] = "victory";

	// Declaring lottery strings
	char s2[] = "a23";
	char s3[] = "i22";
	char* r, *t;

	// Use of strpbrk()
	r = strpbrk(s1, s2);
	t = strpbrk(s1, s3);

	// Checks if player 1 has won lottery
	if (r != 0)
		printf("Congrats u have won");
	else
		printf("Better luck next time");

	// Checks if player 2 has won lottery
	if (t != 0)
		printf("\nCongrats u have won");
	else
		printf("Better luck next time");

	return (0);
}
```

Output:

Better luck next time
Congrats u have won

## strcoll() in C

strcoll() is a built-in library function and is declared in <string.h> header file. This function compares the string pointed to by str1 with the one pointed by str2.The strcoll() function performs the comparison based on the rules of the current locale’s LC_COLLATE category. Syntax:

int strcoll(const char *str1, const char *str2)
Parameters: Function strcoll() takes two strings as parameters and returns an integer value.

Value                   Meaning
less than zero          str1 is less than str2
zero                    str1 is equal to str2
greater than zero       str1 is greater than str2

1.  less than zero : When str1 is less than str2 

```C

// C program to illustrate strcoll()
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[13];
	char str2[13];
	int ret;

	strcpy(str1, "RISHIJOSHI");
	strcpy(str2, "lovesfootball");

	ret = strcoll(str1, str2);

	if (ret > 0) {
		printf("str1 is greater than str2");
	} else if (ret < 0) {
		printf("str1 is lesser than str2");
	} else {
		printf("str1 is equal to str2");
	}

	return (0);
}
```

Output:
str1 is lesser than str2



2.  greater than zero :when str1 is greater than str2 

```C

// C program to illustrate strcoll()
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[13];
	char str2[13];
	int ret;

	strcpy(str1, "geeksforgeeks");
	strcpy(str2, "GEEKSFORGEEKS");

	ret = strcoll(str1, str2);

	if (ret > 0) {
		printf("str1 is greater than str2");
	} else if (ret < 0) {
		printf("str1 is lesser than str2");
	} else {
		printf("str1 is equal to str2");
	}

	return (0);
}
```

Output:
str1 is greater than str2 


3. Is equal to zero : when str1 is equal to str2 


```C

// C program to illustrate strcoll()
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[13];
	char str2[13];
	int ret;

	strcpy(str1, "FOOTBALL");
	strcpy(str2, "FOOTBALL");

	ret = strcoll(str1, str2);

	if (ret > 0) {
		printf("str1 is greater than str2");
	} else if (ret < 0) {
		printf("str1 is lesser than str2");
	} else {
		printf("str1 is equal to str2");
	}

	return (0);
}
```
Output:
str1 is equal to str2 

## Finding the Length of String

Below is the algorithm for finding the length of two strings:

1. SET LEN = 0 AND I = 0.
2. Repeat Steps 3 to 4 while STRING[I] is not NULL:
3. LEN = LEN + 1.
4. SET I = I + 1.
5. Exit.

Programming Example:

```C

/*
 * C program to find the length of a string without using the
 * built-in function
 */
 
#include <stdio.h>
 
void main()
{
    char string[50];
    int i, length = 0;
 
    // input the string
    printf("Enter the string: \n");
    gets(string);
    /*  keep going through each character of the string till its end */
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    printf("The length of a string is the number of characters in it \n");
    printf("So, the length of %s = %d\n", string, length);
}
```

Output:
Enter a string: Hello


The length of a string is the number of characters in it


So, the length of Hello = 5

#

[Previous](../03_Arrays/arrays.md)Arrays

[Next](../05_Control_flow/control_flow.md)Control_Flow
