[Previous](../08_Functions/functions.md) Functions

[Next](../10_Command_Line_Arguments/command_line_arguments.md)Command Line Arguments


#
* [Pointers](./pointer.md#pointers)
* [Reading complex pointers](./reading_complex_pointers.md#reading_complex_pointers)

# Pointers

Pointers in C are a powerful feature that can be a bit tricky to understand at first, but they are essential for advanced programming. In simple terms, a pointer is a variable that holds the memory address of another variable.

Pointers in C are easy and fun to learn. Some C programming tasks are performed more easily with pointers, such as dynamic memory allocation, which cannot be performed without using pointers. So it becomes necessary to learn pointers to become a perfect C programmer.

As you know, a variable holds some value, the address of these values in memory can be access using the ampersand(&) operator. Consider the following example:

Imagine you have a variable named ``age`` that holds the value ``25``. You can print the value of age by using the %d format specifier in the printf function like this:

```c
int age = 25;
printf("Age is: %d", age);
```
Output
```
Age is: 25
```
Now let's say you want to print the memory address of the age variable instead of its value. You can do this by using the ampersand symbol &, which is the "address-of" operator in C:

```c
int age = 25;
printf("Memory address of age is: %p", &age);
```
Output
```
Memory address of age is: 0x7fff5fbff82c
```
```
Note: the Memory address may not be the same if you run the code on your machine.
And we use the format specifier (%p) to print the memory address
```

### What are Pointers?

A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location. Like any variable or constant, you must declare a pointer before using it to store any variable address. To declare a pointer variable in C, you use the asterisk symbol * before the variable name. Here's an example:

```
data-type *var-name;

```


Here, type is the pointer's base type; it must be a valid C data type and var-name is the name of the pointer variable. The asterisk * used to declare a pointer is the same asterisk used for multiplication. However, in this statement the asterisk is being used to designate a variable as a pointer. Take a look at some of the valid pointer declarations −

```

int    *ip;    /* pointer to an integer */
double *dp;    /* pointer to a double */
float  *fp;    /* pointer to a float */
char   *ch     /* pointer to a character */

```


The actual data type of the value of all pointers, whether integer, float, character, or otherwise, is the same, a long hexadecimal number that represents a memory address. The only difference between pointers of different data types is the data type of the variable or constant that the pointer points to.

### How to Use Pointers?

There are a few important operations, which we will do with the help of pointers very frequently.
1. We define a pointer variable,
1. assign the address of a variable to a pointer and
1. finally access the value at the address available in the pointer variable. This is done by using unary operator * that returns the value of the variable located at the address specified by its operand. This is called **Dereferencing**

The following example makes use of these operations −

```C

#include <stdio.h>

int main (void) {
   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */
   ip = &var;  /* store the memory address of var in pointer variable*/

   printf("Address of var variable: %x\n", &var);

   /* address stored in pointer variable */
   printf("Address stored in ip variable: %x\n", ip);

   /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip);

   return 0;
}

```


When the above code is compiled and executed, it produces the following result −

```

Address of var variable: bffd8b3c
Address stored in ip variable: bffd8b3c
Value of *ip variable: 20

```

We can also change the value of a variable using a pointer that points to that variable.

Here's an example:
```c
int age;
int *ptr;

ptr = &age;

age = 20;
printf("Age is: %d", age);

*ptr = 50; /*use pointer to change variable value*/
printf("\nAge is: %d", age);
```
Output:
```
Age is: 20
Age is: 50
```

### NULL Pointers
 
It is always a good practice to assign a NULL value to a pointer variable in case you do not have an exact address to be assigned. This is done at the time of variable declaration. A pointer that is assigned NULL is called a null pointer.

The NULL pointer is a constant with a value of zero defined in several standard libraries. Consider the following program −

```C

#include <stdio.h>

int main () {

   int  *ptr = NULL;

   printf("The value of ptr is : %x\n", ptr  );
 
   return 0;
}

```


When the above code is compiled and executed, it produces the following result −

```

The value of ptr is 0

```


In most of the operating systems, programs are not permitted to access memory at address 0 because that memory is reserved by the operating system. However, the memory address 0 has special significance; it signals that the pointer is not intended to point to an accessible memory location. But by convention, if a pointer contains the null (zero) value, it is assumed to point to nothing.

To check for a null pointer, you can use an 'if' statement as follows −

```C

if(ptr)     /* succeeds if p is not null */
if(!ptr)    /* succeeds if p is null */

```


## Conclusion
Pointers can be confusing at first, but they are an important concept to master in C programming. With pointers, you can manipulate memory directly, which gives you more power as a programmer

## Reading Complex pointers

There are several things which must be taken into the consideration while reading the complex pointers in C. Lets see the precedence and associativity of the operators which are used regarding pointers.

```
Operator       Precedence        Associativity

(), []	         1              Left to right
*,identifier      2	            Right to left
Data type	      3	               -

```

Here,we must notice that,

1. (): This operator is a bracket operator used to declare and define the function.
2. []: This operator is an array subscript operator
3. * : This operator is a pointer operator.
4. Identifier: It is the name of the pointer. The priority will always be assigned to this.
5. Data type: Data type is the type of the variable to which the pointer is intended to point. It also includes the modifier like signed int, long, etc).

How to read the pointer: int (*p)[10].

To read the pointer, we must see that () and [] have the equal precedence. Therefore, their associativity must be considered here. The associativity is left to right, so the priority goes to ().

Inside the bracket (), pointer operator * and pointer name (identifier) p have the same precedence. Therefore, their associativity must be considered here which is right to left, so the priority goes to p, and the second priority goes to *.

Assign the 3rd priority to [] since the data type has the last precedence. Therefore the pointer will look like following.

char -> 4
* -> 2
p -> 1
[10] -> 3

The pointer will be read as p is a pointer to an array of integers of size 10.

Example

How to read the following pointer?

```C
int (*p)(int (*)[2], int (*)void)) 
```

Explanation
This pointer will be read as p is a pointer to such function which accepts the first parameter as the pointer to a one-dimensional array of integers of size two and the second parameter as the pointer to a function which parameter is void and return type is the integer.


[Previous](../08_Functions/functions.md) Functions

[Next](../10_Command_Line_Arguments/command_line_arguments.md)Command Line Arguments
