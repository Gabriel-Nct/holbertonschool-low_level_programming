#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the given format.
 * @format: A list of types of arguments passed to the function.
 *
 * Description: c = char, i = integer, f = float, s = string.
 * If the string is NULL, (nil) is printed.
 * Any other character is ignored.
 */
void print_all(const char * const format, ...)
{
va_list arguments;
unsigned int index = 0;
char *separator = "";
char *string;
va_start(arguments, format);
while (format && format[index])
{
if (format[index] == 'c' || format[index] == 'i' ||
format[index] == 'f' || format[index] == 's') /* 1st IF */
{
printf("%s", separator);
switch (format[index]) /* SWITCH replaces ELSE-IFs */
{
case 'c':
printf("%c", va_arg(arguments, int));
break;
case 'i':
printf("%d", va_arg(arguments, int));
break;
case 'f':
printf("%f", va_arg(arguments, double));
break;
case 's':
string = va_arg(arguments, char *);
printf("%s", string ? string : "(nil)");
break;
}
separator = ", ";
}
index++;
}
va_end(arguments);
printf("\n");
}
