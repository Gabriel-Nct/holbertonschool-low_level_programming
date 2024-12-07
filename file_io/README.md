File I/O Operations
Overview
This project demonstrates basic file input/output operations in C, focusing on system calls like open, close, read, and write. The project involves reading from and writing to files, creating files, appending text to existing files, and copying file contents.

Requirements
Editors: vi, vim, emacs

Compilation: All files will be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89.

Coding Style: Code should adhere to the Betty style.

Restrictions:

No global variables.

Maximum of 5 functions per file.

Allowed C standard library functions: malloc, free, exit.

Allowed syscalls: read, write, open, close.

You are allowed to use _putchar.

Project Structure
Header File: main.h

Function prototypes and necessary includes.

Source Files:

0-read_textfile.c: Reads a text file and prints it to the POSIX standard output.

1-create_file.c: Creates a file with specified permissions and writes to it.

2-append_text_to_file.c: Appends text at the end of a file.

3-cp.c: Copies content from one file to another.

Tasks
Task 0: Tread lightly, she is near
Function: read_textfile

Prototype: ssize_t read_textfile(const char *filename, size_t letters);

Reads and prints a specified number of letters from a file.

Returns: The actual number of letters read and printed, or 0 if an error occurs.

Task 1: Under the snow
Function: create_file

Prototype: int create_file(const char *filename, char *text_content);

Creates a file with specified permissions and writes a given string to it.

Returns: 1 on success, -1 on failure.

Task 2: Speak gently, she can hear
Function: append_text_to_file

Prototype: int append_text_to_file(const char *filename, char *text_content);

Appends a given string to the end of an existing file.

Returns: 1 on success, -1 on failure.

Task 3: cp
Program: cp

Copies content from one file to another.

Handles errors and edge cases with appropriate error messages and exit codes.

Usage
Compile the programs using gcc with the provided options. Example:

sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-read_textfile.c -o read_textfile
Run the programs and provide necessary arguments as required by each task.