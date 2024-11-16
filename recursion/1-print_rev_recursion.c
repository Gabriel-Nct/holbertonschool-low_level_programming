#include "main.h"

/**
 * _print_rev_recursion - imprime une chaîne de caractères en sens inverse
 * @s: la chaîne de caractères à imprimer
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
_print_rev_recursion(s + 1);
_putchar(*s);
}
