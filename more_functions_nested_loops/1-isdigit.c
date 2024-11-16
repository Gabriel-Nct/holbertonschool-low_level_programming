#include "main.h"
/**
 * _isdigit - verifie si le caractère est un chiffre (0 through 9)
 * @c: Le caractère à checker
 *
 * Return: 1 si c est un chiffre, 0 autrement.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
