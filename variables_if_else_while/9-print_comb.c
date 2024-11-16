#include <stdio.h>
/**
 * main - point d'entrée.
 *
 * Return: toujours 0.
 */
int main(void)
{
int nombre;
for (nombre = 0; nombre < 10; nombre++)
{
putchar(nombre + '0');
if (nombre < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
