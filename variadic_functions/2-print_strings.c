#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Description: If a string is NULL, "(nil)" is printed instead.
 * If the separator is NULL, it is not printed. A new line is
 * added at the end of the output.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int index;  /* Iterator for traversing the arguments */
va_list arg_list;    /* List to hold the variadic arguments */
char *current_string; /* Pointer to hold each string argument */
/* Initialize the variadic argument list */
va_start(arg_list, n);
for (index = 0; index < n; index++)
{
/* Get the next string argument */
current_string = va_arg(arg_list, char *);
/* Print (nil) if the string is NULL */
if (current_string == NULL)
printf("(nil)");
else
printf("%s", current_string); /* Print the valid string */
/* Print the separator if it's not NULL and not the last string */
if (separator != NULL && index < n - 1)
printf("%s", separator);
}
/* Clean up the variadic argument list */
va_end(arg_list);
/* Print a new line at the end */
printf("\n");
}
