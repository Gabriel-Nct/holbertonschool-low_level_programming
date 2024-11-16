#include "main.h"
/**
 * _strcpy - Copies a string from src to dest, including the null byte
 * @dest: Destination buffer where the string will be copied
 * @src: Source string to copy
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
