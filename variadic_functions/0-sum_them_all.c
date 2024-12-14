#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters
 * Return: the sum of all parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int compteur;
int sum_them_all = 0;
va_list arguments;
va_start(arguments, n);
if (n == 0)
	return (0);
for (compteur = 0; compteur < n; compteur++)
{
	sum_them_all += va_arg(arguments, int);
}

va_end(arguments);
return (sum_them_all);
}
