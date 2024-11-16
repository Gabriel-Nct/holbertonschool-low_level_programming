#include "main.h"
/**
 * times_table - imprime la table de multiplication de 9, à partir de 0.
 */
void times_table(void)
{
int i, j, prod;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
prod = i * j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
if (prod < 10)
_putchar(' ');
}
if (prod >= 10)
{
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
else
{
_putchar(prod + '0');
}
}
_putchar('\n');
}
}
