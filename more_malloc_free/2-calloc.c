#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Alloue de la mémoire pour un tableau de nmemb éléments,
 *           chaque élément ayant une taille de size octets, et initialise
 *           cette mémoire à zéro.
 * @nmemb: Nombre d'éléments à allouer.
 * @size: Taille de chaque élément.
 *
 * Return: Un pointeur vers la mémoire allouée et initialisée à zéro, ou
 *         NULL si l'allocation échoue ou si nmemb ou size est égal à zéro.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size, i;
char *init_ptr;
if (nmemb == 0 || size == 0)
return (NULL);
total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);
init_ptr = (char *)ptr;
for (i = 0; i < total_size; i++)
init_ptr[i] = 0;
return (ptr);
}
