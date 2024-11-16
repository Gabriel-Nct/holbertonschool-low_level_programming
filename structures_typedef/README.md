# C - Structures, typedef

## Master
By: Julien Barbier  
Weight: 1  
Your score will be updated as you progress.

## Description
This project introduces you to **structures** in C programming and how to use the `typedef` keyword to create new types. You will implement several functions that manipulate structures and explore dynamic memory allocation.

### Tasks Overview:

1. **Poppy (mandatory)**  
   Define a new type `struct dog` with the following elements:
   - `name` (type: `char *`)
   - `age` (type: `float`)
   - `owner` (type: `char *`)
   
   Write a main program to test this structure.

2. **A dog is the only thing on earth that loves you more than you love yourself (mandatory)**  
   Write a function that initializes a variable of type `struct dog`.

3. **A dog will teach you unconditional love. If you can have that in your life, things won't be too bad (mandatory)**  
   Write a function that prints a `struct dog`. Handle `NULL` values appropriately.

4. **Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read (mandatory)**  
   Define a new type `dog_t` as a new name for the type `struct dog`.

5. **A door is what a dog is perpetually on the wrong side of (mandatory)**  
   Write a function that creates a new dog, storing copies of `name` and `owner`.

6. **How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg (mandatory)**  
   Write a function that frees dogs.

## Resources

Read or watch:
- [0x0d. Structures.pdf](0x0d. Structures.pdf)
- [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
- [Documentation: structures](https://en.cppreference.com/w/c/language/struct)
- [0x0d. Typedef and structures.pdf](0x0d. Typedef and structures.pdf)
- [typedef](https://en.wikipedia.org/wiki/Typedef)
- Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189
- The Lost Art of C Structure Packing (Advanced - not mandatory)

## Learning Objectives

### At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
#### General
- What are structures, when, why, and how to use them.
- How to use `typedef` to define new types.

## Requirements

### General
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the **Betty** style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `printf`, `malloc`, `free`, and `exit`
- The main files (`main.c`) are shown as examples to test your functions. They should not be pushed to your repository, as they will not be taken into account during grading.
- Don't forget to push your header files (`dog.h`, etc.)
- All your header files should be **include guarded** (using `#ifndef`, `#define`, and `#endif`)

## File Structure

- `dog.h`: Header file containing the structure definition and function prototypes.
- `dog.c`: Contains the implementations for the functions.
- `README.md`: This file.

---

## Example

### Compilation:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
$ ./a
My name is Poppy, and I am 3.5 :) - Woof!

