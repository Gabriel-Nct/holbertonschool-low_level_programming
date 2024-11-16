# C - Malloc, Free

## Description

This project explores the concepts of dynamic memory allocation in C, focusing on the use of `malloc` and `free` functions to manage memory dynamically at runtime. You will learn the differences between automatic and dynamic allocation, understand how to use `malloc` to allocate memory, and `free` to deallocate memory, preventing memory leaks. This project also introduces `valgrind` for debugging and memory leak checks.

## Learning Objectives

By the end of this project, you should be able to explain:
- The difference between automatic (stack) and dynamic (heap) memory allocation.
- How to use `malloc` and `free` for memory management.
- When and why to use dynamic memory allocation.
- How to check for memory leaks with `valgrind`.

## Resources

- **PDF**: [0x0a - malloc & free - quick overview](link)
- **Video**: [Dynamic memory allocation in C](link) (watch up to 6:50)
- **Manuals**: `man malloc`, `man free`

## Requirements

- **Editors**: vi, vim, emacs
- **Compilation**: Ubuntu 20.04 LTS, `gcc` with options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Code style**: Betty style (checked with `betty-style.pl` and `betty-doc.pl`)
- **Restrictions**:
  - Only allowed library functions are `malloc` and `free`.
  - No global variables.
  - Maximum of 5 functions per file.
  - `main.h` must contain all prototypes, including `_putchar`.
  - `_putchar.c` file should not be pushed.

## Tasks

### 0. Float like a butterfly, sting like a bee

- **Description**: Write a function `create_array` that creates an array of chars, initialized with a specific char.
- **Prototype**: `char *create_array(unsigned int size, char c);`
- **Return**: NULL if `size` is 0 or memory allocation fails.

### 1. The woman who has no imagination has no wings

- **Description**: Write a function `_strdup` that returns a pointer to a newly allocated space in memory, containing a copy of a given string.
- **Prototype**: `char *_strdup(char *str);`
- **Return**: NULL if `str` is NULL or allocation fails.

### 2. He who is not courageous enough to take risks will accomplish nothing in life

- **Description**: Write a function `str_concat` that concatenates two strings, storing the result in dynamically allocated memory.
- **Prototype**: `char *str_concat(char *s1, char *s2);`
- **Return**: NULL on failure.

### 3. If you even dream of beating me you'd better wake up and apologize

- **Description**: Write a function `alloc_grid` that returns a pointer to a 2D array of integers, with all elements initialized to 0.
- **Prototype**: `int **alloc_grid(int width, int height);`
- **Return**: NULL if width or height is 0 or negative, or if allocation fails.

### 4. It's not bragging if you can back it up

- **Description**: Write a function `free_grid` that frees a 2D grid created by `alloc_grid`.
- **Prototype**: `void free_grid(int **grid, int height);`

## Additional Information

For memory leak checks and debugging, use `valgrind`. Example usage:
```bash
valgrind ./your_program

