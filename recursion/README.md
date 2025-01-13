# C - Recursion

## Description

Recursion is a fundamental concept in programming where a function calls itself in order to solve a problem. This method is often used to solve problems that can be broken down into smaller, identical subproblems.

### Learning Objectives

At the end of this project, you should be able to:

-   **Understand what recursion is**: A function calling itself to solve a problem.
-   **Implement recursion**: Be able to write recursive functions to solve specific problems.
-   **Know when to use recursion**: Understand situations where recursion is appropriate, such as when a problem can naturally be divided into smaller, similar subproblems (e.g., factorial, Fibonacci numbers, etc.).
-   **Know when not to use recursion**: Recursion can sometimes lead to inefficiency or stack overflow errors if not used carefully. It's important to recognize problems that may be better solved with iterative methods.

## Recursion in C

### Key Concepts

1.  **What is Recursion?**
    
    Recursion occurs when a function calls itself to solve a problem. The problem is solved by dividing it into smaller subproblems of the same type. Every recursive function needs a **base case** that stops the recursion to avoid infinite loops.
    
2.  **How to Implement Recursion**
    
    A recursive function generally works as follows:
    
    -   **Base case**: This is the condition that ends the recursion. Without it, the function would call itself infinitely, causing a stack overflow.
    -   **Recursive case**: The function performs a smaller part of the problem and calls itself to handle the rest.
    
    Example of a simple recursive function to compute the factorial of a number:
 ```c
    int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
```

-   In this example:
    
    -   **Base case**: If `n <= 1`, the function stops and returns 1.
    -   **Recursive case**: If `n > 1`, the function calls itself with `n-1`.

3. **When to Use Recursion**
    
    Use recursion when:
    
    -   The problem can be divided into smaller subproblems of the same type.
    -   The problem has a base case to stop recursion.
    -   Examples of problems well-suited for recursion include calculating factorials, Fibonacci numbers, tree traversal, and more.

4. **When Not to Use Recursion**
    
    Avoid recursion when:
    
    -   The problem is better suited to iterative solutions (e.g., problems with simple loops).
    -   The recursion depth could cause stack overflow errors.
    -   Recursion might lead to inefficiency, especially if a large number of recursive calls are involved (such as in problems with overlapping subproblems).

## Requirements

General:

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line.
-   A `README.md` file at the root of the project folder is mandatory.
-   Your code should adhere to the **Betty style** (checked using `betty-style.pl` and `betty-doc.pl`).
-   You are not allowed to use **global variables**.
-   No more than 5 functions per file.
-   You are not allowed to use the standard library. **No use of `printf`, `puts`, etc.**
-   You are allowed to use `_putchar`.
-   You do not need to push `_putchar.c`; we will use our own file.
-   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`. Ensure the header file is pushed.

## Restrictions:

-   **No loops**: You are not allowed to use any kind of loop in this project. Recursion must be used to solve the problems.
-   **No static variables**: Static variables cannot be used in your functions.

----------

### Example Recursive Function

Here's an example to calculate the factorial of a number:
```c
#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to calculate the factorial of
 * Return: the factorial of n
 */
int factorial(int n)
{
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
```
In this function:

    Base case: if (n == 0 || n == 1) ensures that the recursion stops when n reaches 0 or 1.
    Recursive case: return n * factorial(n - 1) reduces the problem size by one each time.

Additional Information
Use of Recursion:

    Advantages:
        Simplifies problems that can be broken into smaller, similar subproblems.
        Often leads to more readable and clean code, especially for problems involving tree traversal or combinations.

    Disadvantages:
        Recursion can cause stack overflow if the recursion depth becomes too large.
        Sometimes less efficient than iterative solutions, especially when there's a lot of repeated work.
