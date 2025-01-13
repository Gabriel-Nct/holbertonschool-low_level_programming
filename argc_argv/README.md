# C - argc, argv

## Description

In this project, you will learn how to use the arguments passed to your program through the command line. Specifically, you'll understand the usage of `argc` (argument count) and `argv` (argument vector) in the `main` function.

### Learning Objectives

By the end of this project, you should be able to:

-   **Understand how to use arguments passed to your program** via the command line.
-   **Know the two prototypes of the `main` function**: one that accepts `argc` and `argv`, and the other used when arguments are not needed.
-   **Use `__attribute__((unused))` or `(void)`** to handle unused variables or parameters in your functions, which helps avoid compilation warnings.

## The `main` Function Prototypes

In C, there are two common prototypes for the `main` function:

1.  **`int main(void)`**:
    
    -   This version of `main` is used when your program does not require any command-line arguments.
    -   Example:
      ```c
    int main(void)
    {
    return 0;
    }

      ```
2. **int main(int argc, char *argv[])**:

    This version allows you to pass arguments to the program via the command line.
    argc is the number of arguments passed, including the name of the program.
    argv is an array of strings (char arrays) representing the arguments.
    Example:
   ```c
int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}

   ```
### Key Concepts

1.  **argc**: The argument count, which holds the number of arguments passed to the program. This includes the program name itself. For example, if you run the program with `./myprogram arg1 arg2`, `argc` will be `3` (1 for `./myprogram`, 1 for `arg1`, and 1 for `arg2`).
    
2.  **argv**: The argument vector, which is an array of strings. Each string corresponds to an argument passed to the program. For example, `argv[0]` is the name of the program, `argv[1]` is the first argument, and so on.
    

----------

### Unused Variables

Sometimes, you may define arguments or parameters that you do not need in your function. To avoid compilation warnings, you can use:

-   **`(void)`**: This is used to indicate that a parameter is intentionally unused.
```c
int main(int argc, char *argv[])
{
    (void)argc;
    printf("Program name: %s\n", argv[0]);
    return 0;
}

```
## Requirements

### General Requirements

-   **Allowed editors**: `vi`, `vim`, `emacs`.
-   **Compilation**: All your files will be compiled on Ubuntu 20.04 LTS using `gcc` with the following options:
    -   `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   **File endings**: All your files should end with a new line.
-   **README.md**: A `README.md` file at the root of your project folder is mandatory.
-   **Betty style**: Your code should follow the **Betty style**. It will be checked using `betty-style.pl` and `betty-doc.pl`.
-   **No global variables**.
-   **No more than 5 functions per file**.
-   **Prototypes**: All your function prototypes, including the one for `_putchar`, should be declared in a header file called `main.h`. Ensure that `main.h` is pushed to your repository.
-   **Standard library**: You are allowed to use the standard library.

