[Previous](../09_Pointers/more_pointes.md) More Pointers

[Next](TODO) Command Line Arguments

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


[Previous](../09_Pointers/more_pointes.md) More Pointers

[Next](TODO) Command Line Arguments