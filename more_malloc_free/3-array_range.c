#include "main.h"
#include <stdlib.h>
/**
 * array_range - Crée un array d'int.
 * @min: première valeur de l'array.
 * @max: dernière valeur de l'array.
 *
 * Return: Si min est plus grand que max ou la fonction échoue - NULL.
 *         Sinon - un pointer pour la nouvelle array.
 */
int *array_range(int min, int max)
{
int *array, index, size;
if (min > max)
return (NULL);
size = max - min + 1;
array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);
for (index = 0; index < size; index++)
array[index] = min++;
return (array);
}
