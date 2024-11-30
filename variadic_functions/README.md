Variadic Functions

Description

This project implements variadic functions in C. Variadic functions allow you to define functions that accept a variable number of arguments. The main goal of this project is to become familiar with using the macros va_start, va_arg, and va_end to handle these variable arguments, as well as understanding how to use the const keyword in C.

Learning Objectives

By the end of this project, you should be able to explain:

    What variadic functions are.
    How to use the va_start, va_arg, and va_end macros.
    Why and how to use the const type qualifier.

Tasks

0. Beauty is variable, ugliness is constant

Write a function that returns the sum of all its parameters.
```c
    Prototype: int sum_them_all(const unsigned int n, ...);
    If n == 0, return 0.
```

1. To be is to be the value of a variable

Write a function that prints numbers, followed by a new line.
```c
    Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
```
    separator is the string to be printed between numbers.
    n is the number of integers passed to the function.
    If separator is NULL, do not print it.


2. One woman's constant is another woman's variable

Write a function that prints strings, followed by a new line.
```c
    Prototype: void print_strings(const char *separator, const unsigned int n, ...);
```
    separator is the string to be printed between strings.
    n is the number of strings passed to the function.
    If separator is NULL, don’t print it.
    If one of the strings is NULL, print (nil) instead.


3. To be is a to be the value of a variable

Write a function that prints anything.
```c
    Prototype: void print_all(const char * const format, ...);
```
    format is a list of types of arguments passed to the function. It can be:
        c: char
        i: integer
        f: float
        s: char * (If the string is NULL, print (nil) instead).
        Any other character should be ignored.
    You are not allowed to use for, goto, ternary operators, else, or do...while.
    You can use a maximum of:
        2 while loops
        2 if conditions
    You can declare a maximum of 9 variables.
    You are allowed to use printf.

Files

    variadic_functions.h: Header file that contains the function prototypes.
    0-sum_them_all.c: Function that returns the sum of all its parameters.
    1-print_numbers.c: Function that prints numbers, followed by a new line.
    2-print_strings.c: Function that prints strings, followed by a new line.
    3-print_all.c: Function that prints any type of argument passed to it.

Compilation

The project must be compiled using the following GCC options:
```c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> -o <output_name>
```
Ensure that you do not use global variables and that your code adheres to the Betty style guide.
Requirements

    Allowed editors: vi, vim, emacs.
    All files should be compiled on Ubuntu 20.04 LTS using gcc.
    All files should end with a new line.
    The function prototypes should be included in a header file called variadic_functions.h.
    You are allowed to use the following macros: va_start, va_arg, va_end.
    You are allowed to use the _putchar function for output.
    No other standard C library functions (like printf, puts, calloc, etc.) are allowed.

Example
Example 1:
```c
sum_them_all(2, 98, 1024); // Output: 1122
sum_them_all(4, 98, 1024, 402, -1024); // Output: 500
```
Example 2:
```c
print_numbers(", ", 4, 0, 98, -1024, 402); // Output: 0, 98, -1024, 402
```
Example 3:
```c
print_strings(", ", 2, "Jay", "Django"); // Output: Jay, Django
```
Example 4:
```c
print_all("ceis", 'B', 3, "stSchool"); // Output: B, 3, stSchool
```
Submission

    Push your code to your repository.
    Ensure that all your files (including the header file) are correctly placed in the corresponding directory (variadic_functions).