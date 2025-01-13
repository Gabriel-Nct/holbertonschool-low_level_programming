# C - Variadic Functions

## Description

A **variadic function** is a function that can accept a variable number of arguments. This is achieved by using macros provided in the `stdarg.h` header file, such as `va_start`, `va_arg`, and `va_end`.

### Learning Objectives

By the end of this project, you should be able to:

-   **Understand what variadic functions are**.
-   **Know how to use the `va_start`, `va_arg`, and `va_end` macros**.
-   **Understand why and how to use the `const` type qualifier**.

## Key Concepts

### What Are Variadic Functions?

A **variadic function** is a function that takes an indefinite number of arguments. It is declared using an ellipsis (`...`) in the function prototype to indicate that it can accept a variable number of arguments.

Example of a variadic function declaration:
```c
int sum(int n, ...);
```
In the above example, `n` is a regular parameter, and the `...` indicates that the function can accept a variable number of arguments.

### Macros to Access Variadic Arguments

The C language provides the following macros for working with variadic functions:

1.  **`va_start`**: Initializes a `va_list` variable to access the variable arguments.
2.  **`va_arg`**: Retrieves the next argument in the argument list and advances the pointer.
3.  **`va_end`**: Cleans up any resources used by the variadic argument list.

### Example of Using `va_start`, `va_arg`, and `va_end`

Here’s an example of how you can implement a variadic function that sums up all the arguments:
```c
#include <stdarg.h>
#include <stdio.h>

/**
 * sum - returns the sum of all its parameters.
 * @n: the number of arguments
 * Return: sum of all arguments
 */
int sum(int n, ...)
{
    int total = 0;
    va_list args;

    va_start(args, n);

    for (int i = 0; i < n; i++)
{
        total += va_arg(args, int);
}

    va_end(args);

    return total;
}

int main(void) {
    printf("Sum: %d\n", sum(3, 1, 2, 3))
Sum: 6
    return 0;
}

```

In this example:

-   `va_start(args, n)` initializes `args` to point to the first variadic argument.
-   `va_arg(args, int)` retrieves the next argument as an integer.
-   `va_end(args)` is used to clean up the memory used by `args`.

### Why and How to Use the `const` Type Qualifier

The `const` type qualifier can be used to declare parameters or variables that should not be modified. It's helpful for ensuring that certain arguments passed to functions remain unchanged within the function body. For example:
```c
void print_message(const char *msg)
{
    printf("%s\n", msg);
}

```
Here, `msg` is a pointer to a constant string, meaning you cannot modify the string that `msg` points to within the function.

----------

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
-   **Allowed standard library functions**: `malloc`, `free`, and `exit`. You cannot use other standard library functions like `printf`, `puts`, `calloc`, `realloc`, etc.
-   **_putchar**: You are allowed to use `_putchar`, but you don’t have to push your `_putchar.c` file.
-   **Function prototypes**: All function prototypes should be in a header file called `variadic_functions.h`.
-   **Header files**: All header files should be **include guarded**.
