#include "main.h"
/**
 * _strncat - concatène deux chaînes de caractères
 * @dest: chaîne de destination
 * @src: chaîne source
 * @n: nombre d'octets à concaténer
 *
 * Return: pointeur vers la chaîne résultante dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *d = dest;
while (*d)
d++;
while (n-- && *src)
{
*d++ = *src++;
}
*d = '\0';
return (dest);
}
