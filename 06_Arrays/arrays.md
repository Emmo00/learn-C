[Previous](../05_Loops/loops.md) Loops

[Next](../07_Strings/strings.md) Strings
#
  * [Arrays](./arrays.md#arrays)
	* [Declaration of an array](./arrays.md#declaration)
    * [Accessing and modifying Array Elements](./arrays.md#accessing-and-modifying-array-elements)
	* [Advantages](./arrays.md#advantages)
    * [Disadvantage](./arrays.md#disadvantages)
    * [How to traverse in an array](./arrays.md#traverse)
    * [Multidimensional Arrays in C](./arrays.md#multidimensional_array)
		* [Two Dimensional Arrays](./arrays.md#two-dimensional-array)
		* [Three Dimensional Arrays](./arrays.md#three-dimensional-array)
# Arrays
It is a group of variables of similar data types referred to by a single element. Elements of an Array are stored in a contiguous memory location.

The size of the array should be mentioned while declaring it.
4.Array elements are always counted from zero (0) onward.
5.Array elements can be accessed using the position of the element in the array.
6.The array can have one or more dimensions.
 
An array in C or be it in any programming language is a collection of similar data items stored at contiguous memory locations and elements can be accessed randomly using indices of an array.  They can be used to store the collection of primitive data types such as int, float, double, char, etc of any particular type. To add to it, an array in C can store derived data types such as structures, pointers etc.
## Declaration
There are various ways in which we can declare an array. It can be done by specifying its type and size, initializing it or both.
Array declaration by specifying the size:
```C
#include <stdio.h>

int main()
{
	// array declaration by specifying size
	int arr1[10];
	
	// With recent C versions, we can also
	// declare an array of user specified size
	int n = 10;
	int arr2[n];
	
	return 0;
}
```
Array declaration by initializing elements:
```C
// Array declaration by initializing elements
#include <stdio.h>

int main()
{
	int arr[] = { 10, 20, 30, 40};
	return 0;
// Compiler creates an array of size 4.
// above is same as "int arr[4] = {10, 20, 30, 40}"
}
```
Array declaration by specifying the size and initializing elements:
```C
#include <stdio.h>

int main()
{
	// Array declaration by specifying size and initializing
	// elements
	int arr[6] = { 10, 20, 30, 40 };

	// Compiler creates an array of size 6, initializes first
	// 4 elements as specified by user and rest two elements as
	// 0. above is same as "int arr[] = {10, 20, 30, 40, 0, 0}"
	
	return 0;
}
```
In C, it is not a compiler error to initialize an array with more elements than the specified size. For example, the below program compiles fine and shows just a Warning.
```C
#include <stdio.h>
int main()
{

	// Array declaration by initializing it
	// with more elements than specified size.
	int arr[2] = { 10, 20, 30, 40, 50 };

	return 0;
}
```
Warnings: 
```
prog.c: In function 'main':
prog.c:7:25: warning: excess elements in array initializer
  int arr[2] = { 10, 20, 30, 40, 50 };
                         ^
prog.c:7:25: note: (near initialization for 'arr')
prog.c:7:29: warning: excess elements in array initializer
  int arr[2] = { 10, 20, 30, 40, 50 };
                             ^
prog.c:7:29: note: (near initialization for 'arr')
prog.c:7:33: warning: excess elements in array initializer
  int arr[2] = { 10, 20, 30, 40, 50 };
                                 ^
prog.c:7:33: note: (near initialization for 'arr')
```
## Accessing and Modifying Array Elements
To access an element in an array, we use the index numbers.

Array indexes start with 0: [0] is the first element. [1] is the second element, etc.

Example:
```C
#include<stdio.h>

int main(void)
{
	int numbers[] = {1, 2, 3, 4};

	printf("%d", myNumbers[0]);
	return (0);
}
```
Output:
```
1
```
We Can also change the Value of elements in an array

Example:
```C
#include<stdio.h>

int main(void)
{
	int numbers[] = {1, 3, 5, 6};

	numbers[0] = 2;
	printf("%d", myNumbers[0]); /*This outputs 2 instead of 1*/
	return (0);
}
```
Output:
```
2
```

## Advantages
Code Optimization:  we can retrieve or sort the data efficiently.
Random access: We can get any data located at an index position.
## Disadvantages
Size Limit: We can store only the fixed size of elements in the array. It doesn’t grow its size at runtime.
## Traverse
Traversing in array is basically going through all the elements present in that particular array. It can be divided into three parts that are to be performed in a definite sequence
Approach:-  

1. Start a loop from 0 to N-1, where N is the size of array. 
```C
for (i = 0; i < N; i++)
```
Loops in Later Chapter. [Loops](TODO)

2. Access every element of array with help of arr[index]
3. Print the elements. 
printf("%d ", arr[i])
```C
// C program to traverse the array

#include <stdio.h>

int main()
{
	int arr[5];
	//declaring the integer used in the loop
	int i;
	//taking input of all the elements to be entered
	for (i=0; i<=5; i++)
	{
		scanf("%d",&arr[i]);
	}
	//printing all the elements 
	for(i=0;i<=5;i++)
	{
  		printf("%d",arr[i]);
	}
	return 0;
}
```
Another different method could be:
```C
#include <stdio.h>

int main()
{
	int arr[5];
	arr[0] = 5;
	arr[2] = -10;
	arr[3 / 2] = 2; // this is same as arr[1] = 2
	arr[3] = arr[0];

	printf("%d %d %d %d", arr[0],
		arr[1], arr[2], arr[3]);

	return 0;
}
```
No Index Out of bound Checking: 
There is no index out of bounds checking in C, for example, the following program compiles fine but may produce unexpected output when run.
```C
// This C program compiles fine
// as index out of bound
// is not checked in C.

#include <stdio.h>

int main()
{
	int arr[2];

	printf("%d ", arr[3]);
	printf("%d ", arr[-2]);

	return 0;
}
```
## Multidimensional_array
Prerequisite: Arrays in C

A multi-dimensional array can be termed as an array of arrays that stores homogeneous data in tabular form. Data in multidimensional arrays are stored in row-major order.

The general form of declaring N-dimensional arrays is:  
```
data_type array_name[size1][size2]....[sizeN];
```
* data_type: Type of data to be stored in the array.
* array_name: Name of the array
size1, size2,… ,sizeN: Sizes of the dimension
Examples: 

Two dimensional array: 
```
int two_d[10][20];
```

Three dimensional array:
```
int three_d[10][20][30];
```
Size of Multidimensional Arrays:

The total number of elements that can be stored in a multidimensional array can be calculated by multiplying the size of all the dimensions. 
For example: 

The array int x[10][20] can store total (10*20) = 200 elements. 

Similarly array int x[5][10][20] can store total (5*10*20) = 1000 elements.
### Two-Dimensional Array
Two – dimensional array is the simplest form of a multidimensional array. We can see a two – dimensional array as an array of one-dimensional array for easier understanding. 
The basic form of declaring a two-dimensional array of size x, y: 
Syntax: 
```
data_type array_name[x][y];
```
 Here, data_type is the type of data to be stored.

We can declare a two-dimensional integer array say ‘x’ of size 10,20 as: 
```
int x[10][20];
```
Elements in two-dimensional arrays are commonly referred to by x[i][j] where i is the row number and ‘j’ is the column number.
Initializing Two – Dimensional Arrays: There are various ways in which a Two-Dimensional array can be initialized. 

First Method: 
```C
int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11}
```
The above array has 3 rows and 4 columns. The elements in the braces from left to right are stored in the table also from left to right. The elements will be filled in the array in order, the first 4 elements from the left in the first row, the next 4 elements in the second row, and so on.

Second Method: 
```C
int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
```
Third Method:
```C
int x[3][4];
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
        cin >> x[i][j];
    }
}
```
This type of initialization makes use of nested braces. Each set of inner braces represents one row. In the above example, there is a total of three rows so there are three sets of inner braces.

Accessing Elements of Two-Dimensional Arrays: Elements in Two-Dimensional arrays are accessed using the row indexes and column indexes. 

Example: 
```C
int x[2][1];
```
The above example represents the element present in the third row and second column.

*Note: In arrays, if the size of an array is N. Its index will be from 0 to N-1. Therefore, for row index 2 row number is 2+1 = 3. To output all the elements of a Two-Dimensional array we can use nested for loops. We will require two ‘for‘ loops. One to traverse the rows and another to traverse columns.*
```C
// C Program to print the elements of a
// Two-Dimensional array

#include<stdio.h>

int main(void)
{
	// an array with 3 rows and 2 columns.
	int x[3][2] = {{0,1}, {2,3}, {4,5}};

	// output each array element's value
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("Element at x[%i][%i]: ",i, j);
			printf("%d\n",x[i][j]);
		}
	}

	return (0);
}
```
Output: 
```
Element at x[0][0]: 0
Element at x[0][1]: 1
Element at x[1][0]: 2
Element at x[1][1]: 3
Element at x[2][0]: 4
Element at x[2][1]: 5 
```
### Three-Dimensional Array
Initialization in a Three-Dimensional array is the same as that of Two-dimensional arrays. The difference is as the number of dimensions increases so the number of nested braces will also increase. 

Method 1:
```c
int x[2][3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
                 11, 12, 13, 14, 15, 16, 17, 18, 19,
                 20, 21, 22, 23};
```
Method 2(Better):  
```C
int x[2][3][4] = 
 { 
   { {0,1,2,3}, {4,5,6,7}, {8,9,10,11} },
   { {12,13,14,15}, {16,17,18,19}, {20,21,22,23} }
 };
 ```
Accessing elements in Three-Dimensional Arrays: Accessing elements in Three-Dimensional Arrays is also similar to that of Two-Dimensional Arrays. The difference is we have to use three loops instead of two loops for one additional dimension in Three-dimensional Arrays.
```C
// C program to print elements of Three-Dimensional Array

#include <stdio.h>

int main(void)
{
	// initializing the 3-dimensional array
	int x[2][3][2] = { { { 0, 1 }, { 2, 3 }, { 4, 5 } },
					{ { 6, 7 }, { 8, 9 }, { 10, 11 } } };

	// output each element's value
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 2; ++k) {
				printf("Element at x[%i][%i][%i] = %d\n", i, j, k, x[i][j][k]);
			}
		}
	}
	return (0);
}
```
Output: 
```
Element at x[0][0][0] = 0
Element at x[0][0][1] = 1
Element at x[0][1][0] = 2
Element at x[0][1][1] = 3
Element at x[0][2][0] = 4
Element at x[0][2][1] = 5
Element at x[1][0][0] = 6
Element at x[1][0][1] = 7
Element at x[1][1][0] = 8
Element at x[1][1][1] = 9
Element at x[1][2][0] = 10
Element at x[1][2][1] = 11
```

In similar ways, we can create arrays with any number of dimensions. However, the complexity also increases as the number of dimensions increases. The most used multidimensional array is the Two-Dimensional Array. 

#
[Previous](../05_Loops/loops.md) Loops

[Next](../07_Strings/strings.md) Strings


