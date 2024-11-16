#include "main.h"
/**
 * _memcpy - Copie une zone de mémoire.
 * @dest: Destination où les octets sont copiés.
 * @src: Source à partir de laquelle les octets sont copiés.
 * @n: Nombre d'octets à copier.
 *
 * Return: Pointeur vers la destination `dest`.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
