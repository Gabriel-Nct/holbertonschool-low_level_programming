#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - intialise une variable de type struct dog.
 * @d: le chien à intialiser.
 * @name: le nom du chien.
 * @age: l'âge du chien.
 * @owner: le propriétaire du chien.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
