[Previous](../14_Variadic_Functions/variadic_functions.md) Variadic Functions

[Next](../16_File_name/file_name.md) File Name

#

* [File IO](./file_io.md#file_oi)
* [Types of Files](./file_io.md#types-of-files)
* [Opening or Creating file in C](./file_io.md#opening-or-creating-file-in-C)
* [Reading from a file](./file_io.md#reading-from-a-file)
* [Writing to a File](./file_io.md#writing-to-a-file)
* [Closing a File](./file_io.md#closing-a-file)
* [Write to a Binary File](./file_io.md#write-to-a-binary-file)
* [Reading from Binary File](./file_io.md#reading-from-binary-file)


# File IO

In this article you will learn what are files in C, why they are needed, and how to handle standard I/O in C with the help of different C functions like fopen(), fclose(), fprintf(), fscanf(), getc(), putc(), getw(), fseek(), etc. A file represents a sequence of bytes regardless of being a text file or a binary file.

A file is used to store huge data. C provides multiple file management functions like file creation, opening and reading files, Writing to the file, and closing a file. The file is used to store relevant data and file handling in C is used to manipulate the data.

# Types of Files

Generally, a text file contains alphabets, digits, and special characters or symbols, while a binary file contains bytes or a compiled version of the text. It is important to recognize two types of files when dealing with files:

Text Files
Binary Files
Text Files: Text files contain data in the form of ASCII characters and are generally used to store a stream of characters. Each line in a text file ends with a new line character (‘/n’). Text files are used to store the source code.

Binary Files: Binary files contain data that is stored in a similar manner to how it is stored in the main memory. Instead of ASCII characters, it is stored in binary format. The binary files can be created only from within a program and their contents can only be read by a program.

 # Functions in File Operations:
  
  ![image](https://user-images.githubusercontent.com/110519406/221906282-60ad4c60-d4a1-4703-97b2-e3c49e1d8206.png)
  
  
# Opening or Creating File in C
  
For opening a file, fopen() function is used with the required access modes. Some of the commonly used file access modes are mentioned below.

*File opening modes in C:* 

```
Opening Modes              	Description
__________________________________________________________________________________________________________________                     
r                           Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to                             the first character in it. If the file cannot be opened fopen( ) returns NULL.

rb	                        Open for reading in binary mode. If the file does not exist, fopen( ) returns NULL.

w                           Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist, a new file is created.                               Returns NULL, if unable to open the file.

wb	                        Open for writing in binary mode. If the file exists, its contents are overwritten. If the file does not exist, it                               will be created.

a	                          Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to                             the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the                                 file.

ab                       	  Open for append in binary mode. Data is added to the end of the file. If the file does not exist, it will be                                     created.

r+	                        Searches file. It is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the                                 first character in it. Returns NULL, if unable to open the file.

rb+	                        Open for both reading and writing in binary mode. If the file does not exist, fopen( ) returns NULL.

w+	                        Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist a new file is created.                               Returns NULL, if unable to open the file.

wb+	                        Open for both reading and writing in binary mode. If the file exists, its contents are overwritten. If the file does                             not exist, it will be created.

a+	                        Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to                             the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the                                 file.

ab+	                        Open for both reading and appending in binary mode. If the file does not exist, it will be created.

```


As given above, if you want to perform operations on a binary file, then you have to append ‘b’ at the last. For example, instead of “w”, you have to use “wb”, instead of “a+” you have to use “a+b”. For performing the operations on the file, a special pointer called File pointer is used which is declared as:

```
FILE *filePointer; 

So, the file can be opened as 

filePointer = fopen(“fileName.txt”, “w”)

```
The second parameter can be changed to contain all the attributes listed in the above table.
  
# Reading From a File

The file read operations can be performed using functions fscanf or fgets. Both the functions performed the same operations as that of scanf and gets but with an additional parameter, the file pointer. So, it depends on you if you want to read the file line by line or character by character.
And the code snippet for reading a file is as: 
 
```
FILE * filePointer; 

filePointer = fopen(“fileName.txt”, “r”);

fscanf(filePointer, "%s %s %s %d", str1, str2, str3, &year);

```

# Writing to a File
The file write operations can be performed by the functions fprintf and fputs with similarities to read operations. The snippet for writing to a file is as:

```
FILE *filePointer ; 

filePointer = fopen(“fileName.txt”, “w”);

fprintf(filePointer, "%s %s %s %d", "We", "are", "in", 2012);
```

# Closing a File
After every successful file operation, you must always close a file. For closing a file, you have to use fclose() function. The snippet for closing a file is given as:

```
FILE *filePointer ; 

filePointer= fopen(“fileName.txt”, “w”);

---------- Some file Operations -------

fclose(filePointer)
```

Example 1: Program to Open a File, Write in it, And Close the File

```C
// C program to Open a File,
// Write in it, And Close the File
 
# include <stdio.h>
# include <string.h>
 
int main( )
{
 
    // Declare the file pointer
    FILE *filePointer ;
     
    // Get the data to be written in file
    char dataToBeWritten[50]
        = "GeeksforGeeks-A Computer Science Portal for Geeks";
 
    // Open the existing file GfgTest.c using fopen()
    // in write mode using "w" attribute
    filePointer = fopen("GfgTest.c", "w") ;
     
    // Check if this filePointer is null
    // which maybe if the file does not exist
    if ( filePointer == NULL )
    {
        printf( "GfgTest.c file failed to open." ) ;
    }
    else
    {
         
        printf("The file is now opened.\n") ;
         
        // Write the dataToBeWritten into the file
        if ( strlen ( dataToBeWritten ) > 0 )
        {
             
            // writing in the file using fputs()
            fputs(dataToBeWritten, filePointer) ;
            fputs("\n", filePointer) ;
        }
         
        // Closing the file using fclose()
        fclose(filePointer) ;
         
        printf("Data successfully written in file GfgTest.c\n");
        printf("The file is now closed.") ;
    }
    return 0;       
}
```
Output:

```
The file is now opened.
Data successfully written in file GfgTest.c
The file is now closed.
```

This program will create a file named GfgTest.c in the same directory as the source file which will contain the following text: “GeeksforGeeks-A Computer Science Portal for Geeks”.


Example 2: Program to Open a File, Read from it, And Close the File

```C
// C program to Open a File,
// Read from it, And Close the File
 
# include <stdio.h>
# include <string.h>
 
int main( )
{
 
    // Declare the file pointer
    FILE *filePointer ;
     
    // Declare the variable for the data to be read from file
    char dataToBeRead[50];
 
    // Open the existing file GfgTest.c using fopen()
    // in read mode using "r" attribute
    filePointer = fopen("GfgTest.c", "r") ;
     
    // Check if this filePointer is null
    // which maybe if the file does not exist
    if ( filePointer == NULL )
    {
        printf( "GfgTest.c file failed to open." ) ;
    }
    else
    {
         
        printf("The file is now opened.\n") ;
         
        // Read the dataToBeRead from the file
        // using fgets() method
        while( fgets ( dataToBeRead, 50, filePointer ) != NULL )
        {
         
            // Print the dataToBeRead
            printf( "%s" , dataToBeRead ) ;
        }
         
        // Closing the file using fclose()
        fclose(filePointer) ;
         
        printf("Data successfully read from file GfgTest.c\n");
        printf("The file is now closed.") ;
    }
    return 0;       
}
```
Output:

```
The file is now opened.
GeeksforGeeks-A Computer Science Portal for Geeks
Data successfully read from file GfgTest.c
The file is now closed.
```

This program reads the text from the file named GfgTest.c which we created in the previous example and prints it in the console.

# Write to a Binary File

Example 3: Program to write to a Binary file using fwrite()
 
```C

// C program to write to a Binary file using fwrite()
#include <stdio.h>
#include <stdlib.h>
struct threeNum {
    int n1, n2, n3;
};
int main()
{
    int n;
    // Structure variable declared here.
    struct threeNum num;
    FILE* fptr;
    if ((fptr = fopen("C:\\program.bin", "wb")) == NULL) {
        printf("Error! opening file");
        // If file pointer will return NULL
        // Program will exit.
        exit(1);
    }
    // else it will return a pointer to the file.
    for (n = 1; n < 5; ++n) {
        num.n1 = n;
        num.n2 = 5 * n;
        num.n3 = 5 * n + 1;
        fwrite(&num, sizeof(struct threeNum), 1, fptr);
    }
    fclose(fptr);
    return 0;
}
```

# Reading from Binary File

Example 4: Program to Read from a binary file using fread()
```C

// C Program to Read from a binary file using fread()
#include <stdio.h>
#include <stdlib.h>
struct threeNum {
    int n1, n2, n3;
};
int main()
{
    int n;
    struct threeNum num;
    FILE* fptr;
    if ((fptr = fopen("C:\\program.bin", "rb")) == NULL) {
        printf("Error! opening file");
        // If file pointer will return NULL
        // Program will exit.
        exit(1);
    }
    // else it will return a pointer to the file.
    for (n = 1; n < 5; ++n) {
        fread(&num, sizeof(struct threeNum), 1, fptr);
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2,
               num.n3);
    }
    fclose(fptr);
 
    return 0;
}
```
Output:
```
n1: 1   n2: 5   n3: 6
n1: 2   n2: 10  n3: 11
n1: 3   n2: 15  n3: 16
n1: 4   n2: 20  n3: 21
```

Accessing Data using ```fseek()```

If we have multiple records inside a file and need to access a particular record that is at a specific position, so we need to loop through all the records before it to get the record. Doing this will waste a lot of memory and operational time. To reduce memory consumption and operational time we can use fseek() which provides an easier way to get to the required data. fseek() function in C seeks the cursor to the given record in the file.

Syntax for fseek():

```C
int fseek(FILE *ptr, long int offset, int pos);
```

```C
// C Program  to demonstrate the use of fseek() in C
#include <stdio.h>
 
int main()
{
    FILE* fp;
    fp = fopen("test.txt", "r");
 
    // Moving pointer to end
    fseek(fp, 0, SEEK_END);
 
    // Printing position of pointer
    printf("%ld", ftell(fp));
 
    return 0;
}
```
Output:
```
81
```

























