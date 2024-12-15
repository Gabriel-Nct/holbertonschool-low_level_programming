#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints.
 * @filename: name of the file.
 * @letters: The number of letters
 * Return: letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t open_0, read_1, write_2;
char *buffer;

if (filename == NULL)
	return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
	return (0);

open_0 = open(filename, O_RDONLY);
read_1 = read(open_0, buffer, letters);
write_2 = write(STDOUT_FILENO, buffer, read_1);

if (open_0 == -1 || read_1 == -1 || write_2 == -1 || write_2 != read_1)
{
	free(buffer);
	return (0);
}
free(buffer);
close(open_0);
return (write_2);
}
