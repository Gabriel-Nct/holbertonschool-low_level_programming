#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Applique une fonction sur un string.
 * @name: Chaîne de caractères représentant un nom
 * @f: Pointeur vers une fonction.
 * Description: Fonction qui utilise un pointeur
 * pour appeler d'autres fonctions.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
(*f)(name);
}
