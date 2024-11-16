#include "main.h"
#include <stdio.h>
/**
 * main - Fonction principale pour tester _isdigit
 *
 * Return: Toujours 0.
 */
int main(void)
{
char c;
c = '0';
printf("%c: %d\n", c, _isdigit(c));
c = 'a';
printf("%c: %d\n", c, _isdigit(c));
return (0);
}
