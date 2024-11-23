#include "functions_pointers.h"
/**
 * print_name - Applique une fonction sur un string.
 * @name: Chaîne de caractères représentant un nom
 * @f: Pointeur vers une fonction.
 * 
 * Description: xxx
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
else
{
(*f)(name);
}
}
