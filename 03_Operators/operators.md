[Previous](../02_Variables/variables.md) Variables

[Next](../04_Control_flow/control_flow.md) Control Flow

* [Operators in C](./operators.md)
	* [Arithmetic Operators](./operators.md#arithmetic-operators)
	* [C Increment and Decrement Operators](./operators.md#c-increment-and-decrement-operators)
	* [Assignment Operators](./operators.md#assignment-operators)
	* [Comparison Operators](./operators.md#comparision-operators)
	* [Logical Operators](./operators.md#logical-operators)
	* [Others](./operators.md#others)
	* [Sizeof](./operators.md#sizeof)
# Arithmetic Operators
An arithmetic operator performs mathematical operations such as addition, subtraction, multiplication, division etc on numerical values (constants and variables).


| Operator   |	Meaning of Operator |
| --------- | -------------------- |
| +	  | 	addition or unary plus |
| -	 |  	subtraction or unary minus     |
| *	 |  	multiplication     |
| /   |       	division     |
| %	  |      remainder after division (modulo division)     |


Example 1: Arithmetic Operators
```C
// Working of arithmetic operators

#include <stdio.h>
int main()
{
    int a = 9,b = 4, c;
    
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}
```

Output
```
a+b = 13
a-b = 5
a*b = 36
a/b = 2
Remainder when a divided by b = 1
```
The operators +, - and * computes addition, subtraction, and multiplication respectively as you might have expected.

In normal calculation, 9/4 = 2.25. However, the output is 2 in the program.

It is because both the variables a and b are integers. Hence, the output is also an integer. The compiler neglects the term after the decimal point and shows answer 2 instead of 2.25.

Suppose a = 5.0, b = 2.0, c = 5 and d = 2. Then in C programming,
```C
// Either one of the operands is a floating-point number
a/b = 2.5  
a/d = 2.5  
c/b = 2.5  
```

```C
// Both operands are integers
c/d = 2
```

The modulo operator % computes the remainder. When a=9 is divided by b=4, the remainder is 1. The % operator can only be used with integers.



## C Increment and Decrement Operators

C programming has two operators increment ++ and decrement -- to change the value of an operand (constant or variable) by 1.

Increment ++ increases the value by 1 whereas decrement -- decreases the value by 1. These two operators are unary operators, meaning they only operate on a single operand.


Example 2: Increment and Decrement Operators

```C
// Working of increment and decrement operators
#include <stdio.h>
int main()
{
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;

    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);

    return 0;
}
```
Output
```
++a = 11
--b = 99
++c = 11.500000
--d = 99.500000
```
Here, the operators ++ and -- are used as prefixes. These two operators can also be used as postfixes like a++ and a--.

If the increment operator is use as a prefix (++x), then the value of the variable is incremented before returning the value of the variable.e.g
```C
int x = 5;

printf("%d", ++x); //Return 6 instead of 5
```
But if the increment operator is used as a suffix (x++), the value is returned first before incrementing. e.g:
```C
int x = 5;

printf("%d", x++); //Return 5, then increase the value
```

# Assignment Operators

C Assignment Operators
An assignment operator is used for assigning a value to a variable. The most common assignment operator is =


| Operator |	Example	|	Same as |
| --------- | --------- | ---------- |
 |=	 |	a = b	 |	a = b |
 |+=	 |	a += b	 |	a = a+b |
 |-=	 |	a -= b	 |	a = a-b |
 |*=	 |	a *= b	 |	a = a*b |
 |/=	 |	a /= b	 |	a = a/b |
 |%=	 |	a %= b	 |	a = a%b |


Example 3: Assignment Operators
```C
// Working of assignment operators
#include <stdio.h>
int main()
{
    int a = 5, c;

    c = a;      // c is 5
    printf("c = %d\n", c);
    c += a;     // c is 10 
    printf("c = %d\n", c);
    c -= a;     // c is 5
    printf("c = %d\n", c);
    c *= a;     // c is 25
    printf("c = %d\n", c);
    c /= a;     // c is 5
    printf("c = %d\n", c);
    c %= a;     // c = 0
    printf("c = %d\n", c);

    return 0;
}
```
Output
```
c = 5 
c = 10 
c = 5 
c = 25 
c = 5 
c = 0
```

# Comparison Operators

Comparison operators are binary operators that test a condition and return 1 if that condition is logically true and 0 if that condition is false.


| Operator	| Operator name	| 		Example	Description| 
| -------  | -------  | -------  |
 | ==		 | equal to		 | 	a == b	a is equal to b
 | !=		 | not equal to		 | 	a != b	a is not equal to b
 | <		 | less than			 | a < b	a is less than b
 | >		 | greater than		 | 	a > b	a is greater than b
 | <=		 | less than or equal to	 | 	a <= b	a is less than or equal to b
 | >=		 | greater than or equal to	 | a >= b	a is greater than or equal to b


Let's take help of a code to understand the above concept:

```C
int a, b;

a = 4;
b = 6;

a < b //true (return 1)
b < a //false (0)
a == b // false (0)
a = 6
a == b //true
```
```
Note the difference between the assignment operator (=) and the comparison operator (==)
```
# Logical Operators

An expression containing logical operator returns either 0 or 1 depending upon whether expression results true or false. Logical operators are commonly used in decision making in C programming.


 |Operator	 |Meaning					 |		Example |
| ----------- | ----------------- | ---------------- |
| &&	 |	Logical AND. | True only if all operands are true		If c = 5 and d = 2 then, expression ((c==5) && (d>5)) equals to 0. 
| &#124;&#124;	 |	Logical OR. | True only if either one operand is true	If c = 5 and d = 2 then, expression ((c==5) || (d>5)) equals to 1. |
| !	 |	Logical NOT. | True only if the operand is 0		If c = 5 then, expression !(c==5) equals to 0. |

Example 5: Logical Operators

```C
// Working of logical operators

#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    return 0;
}
```

Output
```
(a == b) && (c > b) is 1 
(a == b) && (c < b) is 0 
(a == b) || (c < b) is 1 
(a != b) || (c < b) is 0 
!(a != b) is 1 
!(a == b) is 0 
```

Explanation of logical operator program

(a == b) && (c > 5) evaluates to 1 because both operands (a == b) and (c > b) is 1 (true).

(a == b) && (c < b) evaluates to 0 because operand (c < b) is 0 (false).

(a == b) || (c < b) evaluates to 1 because (a = b) is 1 (true).

(a != b) || (c < b) evaluates to 0 because both operand (a != b) and (c < b) are 0 (false).

!(a != b) evaluates to 1 because operand (a != b) is 0 (false). Hence, !(a != b) is 1 (true).

!(a == b) evaluates to 0 because (a == b) is 1 (true). Hence, !(a == b) is 0 (false).


# Others

Comma Operator


Comma operators are used to link related expressions together. For example:

```C
int a, c = 5, d;
```


# Sizeof
The sizeof operator is used to compute the size of its operand. it may look like a function, but it is actually an operator.

It returns an unsigned integer.
Example:
```C
#include <stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;
    printf("Size of int=%lu bytes\n",sizeof(a));
    printf("Size of float=%lu bytes\n",sizeof(b));
    printf("Size of double=%lu bytes\n",sizeof(c));
    printf("Size of char=%lu byte\n",sizeof(d));

    return 0;
}
```
Output
```
Size of int = 4 bytes
Size of float = 4 bytes
Size of double = 8 bytes
Size of char = 1 byte
```
We can also pass a data type to the sizeof operator. It simply returns the amount the amount of memory allocated for that data type. e.g:
```C
sizeof(int); //4
sizeof(char); //1
```




#
[Previous](../02_Variables/variables.md) Variables

[Next](../04_Control_flow/control_flow.md) Control Flow
