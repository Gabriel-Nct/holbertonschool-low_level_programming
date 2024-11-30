#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int compteur;
    va_list arguments;

    va_start(arguments, n);

    for (compteur = 0; compteur < n; compteur++)
    {

        printf("%d", va_arg(arguments, int));

        if (separator != NULL && compteur < n - 1)
            printf("%s", separator);
    }

    va_end(arguments); 
    printf("\n");  
}
