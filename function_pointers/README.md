# C - Function Pointers

## Description

Function pointers are a powerful tool in C, allowing you to reference functions and call them indirectly through a pointer. This project will help you understand:

-   **What function pointers are and how to use them**.
-   **What a function pointer holds**.
-   **Where a function pointer points in virtual memory**.

### Learning Objectives

By the end of this project, you should be able to:

-   **Understand what function pointers are** and how they work.
-   **Know what a function pointer exactly holds** (the memory address of a function).
-   **Understand where the function pointer points to in the virtual memory**.

----------

## Key Concepts

### What is a Function Pointer?

A **function pointer** is a pointer that points to a function instead of a variable. It stores the memory address of a function, which you can later use to call the function indirectly. This can be useful when you want to call a function dynamically or pass a function as an argument to another function.

### Syntax of Function Pointers

A function pointer is declared with the following syntax:
```c
return_type (*pointer_name)(parameter_types);
```
For example, to declare a function pointer that points to a function that takes two int arguments and returns an int:
```c
int (*func_ptr)(int, int);
```

### Using Function Pointers

Once a function pointer is declared, you can assign it to a function and use it to call the function:
```c
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int (*func_ptr)(int, int); 
    func_ptr = &add;

    /* Call the function via the function pointer */
    printf("%d\n", func_ptr(2, 3));

    return 0;
}

```

### Where Does a Function Pointer Point to in Memory?

A function pointer points to the **address of the function** in the memory space where the function code is stored. You can visualize a function pointer as holding the "entry point" to the function's code.

### Use Cases of Function Pointers

1.  **Callback functions**: Functions that are passed as arguments to other functions to be called later.
2.  **Dynamic dispatch**: Function pointers allow you to select which function to call at runtime, based on conditions.
3.  **Table of functions**: Arrays of function pointers are often used to implement a menu system or command dispatch.

## Requirements

### General Requirements

-   **Allowed editors**: `vi`, `vim`, `emacs`.
-   **Compilation**: Your files will be compiled on Ubuntu 20.04 LTS using `gcc` with the following options:
    -   `-Wall -Werror -Wextra -pedantic -std=gnu89`.
-   **File endings**: All your files should end with a new line.
-   **README.md**: A `README.md` file is mandatory in the root of your project folder.
-   **Betty style**: Your code should follow the **Betty style**. It will be checked using `betty-style.pl` and `betty-doc.pl`.
-   **No global variables**.
-   **No more than 5 functions per file**.
-   **Allowed standard library functions**: `malloc`, `free`, and `exit`. Use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden.
-   **_putchar**: You are allowed to use `_putchar`, but you don’t have to push your `_putchar.c` file.
-   **Function prototypes**: All function prototypes and the prototype for `_putchar` should be in a header file called `function_pointers.h`.
-   **Header files**: All header files should be **include guarded**.

