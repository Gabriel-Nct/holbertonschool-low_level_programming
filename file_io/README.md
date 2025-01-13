## **C - File I/O**
The **C - File I/O** project introduces you to file handling in C, focusing on system calls for file operations, including opening, reading, writing, and closing files. You'll work with **file descriptors** and explore how the underlying I/O system calls work in a Linux environment.

### **Learning Objectives**

By the end of this project, you should be able to:

-   **Understand how to create, open, close, read, and write files** using system calls in C.
-   **Work with file descriptors**: Understand what file descriptors are and how they are used to interact with files.
-   **Know the 3 standard file descriptors**: These are `stdin`, `stdout`, and `stderr`, and you should understand their purpose and corresponding POSIX names.
-   **Use system calls**: Learn how to use `open`, `close`, `read`, and `write` for file manipulation.
-   **Understand file permissions**: Understand how to set file permissions when creating files using the `open()` system call.
-   **Differentiate between functions and system calls**: Understand the distinction and when to use each.

### **System Calls Overview**

In C, interacting with files is done through **system calls**, which provide a low-level interface to file management. The most commonly used system calls for file I/O are:

1.  **open**: Opens a file.
    
    -   **Prototype**: `int open(const char *pathname, int flags, mode_t mode);`
    -   **Flags** (for `open`):
        -   `O_RDONLY`: Open the file for reading only.
        -   `O_WRONLY`: Open the file for writing only.
        -   `O_RDWR`: Open the file for both reading and writing.
    -   **Mode**: Specifies permissions for a new file when created (e.g., `S_IRUSR` for user read permissions).
2.  **close**: Closes an open file descriptor.
    
    -   **Prototype**: `int close(int fd);`
    -   **Returns**: `0` on success, `-1` on failure.
3.  **read**: Reads data from a file descriptor.
    
    -   **Prototype**: `ssize_t read(int fd, void *buf, size_t count);`
    -   **Returns**: The number of bytes read (or `-1` on failure).
4.  **write**: Writes data to a file descriptor.
    
    -   **Prototype**: `ssize_t write(int fd, const void *buf, size_t count);`
    -   **Returns**: The number of bytes written (or `-1` on failure).
5.  **dprintf**: A function similar to `printf` but writes to a file descriptor.
    
    -   **Prototype**: `int dprintf(int fd, const char *format, ...);`

----------

### **Standard File Descriptors**

The three standard file descriptors that every program uses are:

1.  **`STDIN_FILENO` (0)**: Standard input stream. By default, it is connected to the terminal's input (keyboard).
2.  **`STDOUT_FILENO` (1)**: Standard output stream. By default, it is connected to the terminal's output (screen).
3.  **`STDERR_FILENO` (2)**: Standard error stream. Typically used for error messages.

These file descriptors are represented by integers: `0`, `1`, and `2`, respectively. You will often interact with them via system calls like `read` and `write`.

----------

### **Creating and Managing Files with open()**

When you create or open a file using the `open()` system call, you pass certain flags to control its behavior. Some common flags include:

-   `O_CREAT`: If the file does not exist, it will be created.
-   `O_TRUNC`: If the file exists and is opened for writing, it will be truncated to zero length.
-   `O_APPEND`: Data will be written to the end of the file.

#### Example of opening a file for writing:
```c
int fd = open("example.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd == -1) {
    perror("Error opening file");
    exit(1);
}

```
Here:

-   `O_WRONLY` means open for writing only.
-   `O_CREAT` means create the file if it doesn't exist.
-   `O_TRUNC` truncates the file to zero length.
-   `0644` is the file's permission mode, specifying read/write permissions for the owner and read-only for others.

----------

### **Example Workflow for File Operations**

Below is an example of a basic C program that opens a file, writes to it, and then closes it:
```c
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(void)
{
    int fd = open("file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("Error opening file");
        exit(1);
    }

    char *text = "Hello, World!\n";
    ssize_t bytes_written = write(fd, text, 14);
    if (bytes_written == -1) {
        perror("Error writing to file");
        close(fd);
        exit(1);
    }

    if (close(fd) == -1) {
        perror("Error closing file");
        exit(1);
    }

    return 0;
}

```
### **File Permissions**

When creating a file, you can specify the file's permissions using octal values. For example:

-   `0644` allows the owner to read/write and others to only read.
-   `0755` gives execute permissions to the owner and read/execute permissions to others.

----------

### **Requirements for the Project**

1.  **Allowed editors**: vi, vim, emacs.
2.  **Compilation**: The code will be compiled using:
    -   `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o file_io *.c`.
3.  **File endings**: Ensure all files end with a new line.
4.  **README.md**: You need to include a `README.md` file.
5.  **Betty style**: Follow the **Betty coding style**. This will be checked.
6.  **Global variables**: You are not allowed to use global variables.
7.  **Function restrictions**: You can use only `malloc`, `free`, `exit`, `open`, `close`, `read`, and `write`.
8.  **Header file**: Include all function prototypes in `main.h`. The file should be protected by include guards.
9.  **Use of `dprintf`**: You are allowed to use `dprintf` for formatted output to a file descriptor.

### **Conclusion**

This project will help you understand how to work with files at a low level using system calls in C. You'll get hands-on experience with file descriptors and performing file operations directly with the kernel, which is a crucial skill for systems programming in Linux.
