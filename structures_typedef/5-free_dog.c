#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Libère la mémoire allouée pour une structure dog_t
 * @d: Pointeur vers la structure à libérer
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
