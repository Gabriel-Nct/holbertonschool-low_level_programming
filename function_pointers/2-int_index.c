#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - recherche un entier dans un tableau en fonction d'un critère
 * @array: tableau d'entiers
 * @size: taille du tableau
 * @cmp: fonction de comparaison
 * Return: index de la première correspondance, ou -1 si aucune correspondance
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (cmp == NULL || array == NULL || size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
