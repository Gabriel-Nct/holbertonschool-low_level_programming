#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatène deux chaine de caractère
 * @s1: Première chaine de caractère.
 * @s2: Seconde chaine de caractère.
 * @n: Le nombre maximal ed bytes de s2.
 *
 * Return: Si elle échoue, cela renvoie NULL.
 *         Sinon - un pointer contenant la mémoire.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len = n, index;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (index = 0; s1[index]; index++)
len++;
concat = malloc(sizeof(char) * (len + 1));
if (concat == NULL)
return (NULL);
len = 0;
for (index = 0; s1[index]; index++)
concat[len++] = s1[index];
for (index = 0; s2[index] && index < n; index++)
concat[len++] = s2[index];
concat[len] = '\0';
return (concat);
}
