#include "main.h"
/**
 * _strspn - Renvoie la longueur du préfixe d'une chaîne constitué
 * uniquement de caractères présents dans une autre chaîne.
 * @s: La chaîne à analyser.
 * @accept: La chaîne contenant les caractères acceptés.
 *
 * Return: La longueur du préfixe.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
char *ptr;
while (*s)
{
ptr = accept;
while (*ptr)
{
if (*s == *ptr)
break;
ptr++;
}
if (!*ptr)
break;
len++;
s++;
}
return (len);
}
