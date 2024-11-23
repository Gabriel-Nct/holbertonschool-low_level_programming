#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - Applique une fonction donnée sur une chaîne de caractères
 * @name: Chaîne de caractères représentant un nom
 * @f: Pointeur vers une fonction qui prend un char * en paramètre
 *
 * Description: Cette fonction applique l'opération définie par le
 * pointeur de fonction `f` à la chaîne `name`.
 * Si `name` ou `f` est NULL, elle ne fait rien.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
else (*f)(name);
}
