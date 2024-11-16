#include <stdlib.h>
/**
 * _strdup - retourne un pointeur vers une nouvelle chaîne de caractères
 *            qui est un duplicata de la chaîne fournie en paramètre
 * @str: chaîne de caractères à dupliquer
 *
 * Return: pointeur vers la nouvelle chaîne, ou NULL si str est NULL ou si
 *         l'allocation échoue
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, length = 0;
if (str == NULL)
return (NULL);
while (str[length] != '\0')
length++;
dup = malloc((length + 1) * sizeof(char));
if (dup == NULL)
return (NULL);
for (i = 0; i < length; i++)
dup[i] = str[i];
dup[length] = '\0';
return (dup);
}
