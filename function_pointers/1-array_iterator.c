#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Applique une fonction à chaque élément d'un tableau.
 * @array: Pointeur vers le tableau d'entiers.
 * @size: Taille du tableau.
 * @action: Pointeur vers une fonction à appliquer à chaque élément.
 *
 * Description: Parcourt un tableau et applique une fonction donnée à
 * chaque élément. Si array ou action est NULL, la fonction ne fait rien.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (action == NULL || array == NULL)
return;
for (i = 0; i < size; i++)
(action)(array[i]);
}
