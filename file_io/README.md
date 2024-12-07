README - File I/O in C
Introduction

File Input/Output (I/O) in C is essential for reading and writing data to files. C provides a set of standard functions to handle files through the C Standard Library (stdio.h). These functions allow programs to interact with files for various purposes, such as reading text files, writing to files, or appending data.
Opening a File

To perform any I/O operations on a file, it must first be opened using the fopen() function. The fopen() function requires two parameters:

    File name: The path to the file to be opened.
    Mode: The mode in which the file should be opened (read, write, append, etc.).

Here is an example of opening a file in read mode:
```c
FILE *file = fopen("example.txt", "r");
if (file == NULL) {
    printf("Could not open file.\n");
    return 1;
}
```
Common modes are:

    "r": Open for reading (the file must exist).
    "w": Open for writing (creates the file if it doesn't exist, overwrites if it does).
    "a": Open for appending (adds content at the end of the file).
    "rb", "wb", "ab": Open in binary mode (for non-text files).

Reading from a File

Once a file is opened, you can read its contents using several functions, including fgetc(), fgets(), and fread().
Example 1: Using fgetc() to read one character at a time
```c
char ch;
FILE *file = fopen("example.txt", "r");
if (file == NULL) {
    printf("Could not open file.\n");
    return 1;
}

while ((ch = fgetc(file)) != EOF) {
    putchar(ch);
}
fclose(file);
```
Example 2: Using fgets() to read a line
```c
char line[100];
FILE *file = fopen("example.txt", "r");
if (file == NULL) {
    printf("Could not open file.\n");
    return 1;
}

while (fgets(line, sizeof(line), file)) {
    printf("%s", line);
}

fclose(file);
```

Writing to a File

You can write data to a file using functions like fputc(), fputs(), and fwrite().
Example 1: Using fputc() to write a character
```c
FILE *file = fopen("output.txt", "w");
if (file == NULL) {
    printf("Could not open file.\n");
    return 1;
}

fputc('A', file);

fclose(file);
```
Example 2: Using fputs() to write a string
```c
FILE *file = fopen("output.txt", "w");
if (file == NULL) {
    printf("Could not open file.\n");
    return 1;
}

fputs("Hello, World!", file);

fclose(file);
```
Example 3: Using fwrite() to write a block of data
```c
char data[] = "This is a block of data.";
FILE *file = fopen("output.txt", "w");
if (file == NULL) {
    printf("Could not open file.\n");
    return 1;
}

fwrite(data, sizeof(char), sizeof(data) - 1, file);

fclose(file);
```
Closing a File

After finishing all I/O operations, it is important to close the file using fclose(). This ensures that all changes are saved and that system resources are released.
```c
FILE *file = fopen("example.txt", "r");
if (file == NULL) {
    printf("Could not open file.\n");
    return 1;
}


fclose(file); 
```
Error Handling

When working with files, error handling is crucial. Always check if a file was opened successfully. You can check for errors by examining the returned FILE* from fopen(). Additionally, functions like ferror() and feof() can be used to detect I/O errors or the end-of-file condition.
Example: Error Checking
```c
FILE *file = fopen("example.txt", "r");
if (file == NULL) {
    perror("Error opening file");
    return 1;
}


if (ferror(file)) {
    printf("Error reading from file.\n");
}

fclose(file);
```
Conclusion

File I/O in C is a powerful feature that allows you to interact with external data stored in files. By using the right functions, you can open files, read and write data, and handle errors effectively. Always ensure you close files after use to free system resources and avoid data corruption.