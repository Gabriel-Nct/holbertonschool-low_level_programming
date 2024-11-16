#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Alloue de la mémoire avec malloc
 * @b: Le nombre d'octets à allouer
 *
 * Return: Un pointeur vers la mémoire allouée.
 * Si malloc échoue, termine le programme avec le statut 98.
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
