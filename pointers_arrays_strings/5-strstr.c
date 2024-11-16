#include "main.h"
/**
  * _strstr - trouve la sous-chaîne de caractère
  * @haystack: la chaîne de caractère de recherche
  * @needle: la chaîne de caractère à trouver
  *
  * Return: valeur de char
  */
char *_strstr(char *haystack, char *needle)
{
int a = 0, b = 0;
while (haystack[a])
{
while (needle[b])
{
if (haystack[a + b] != needle[b])
{
break;
}
b++;
}
if (needle[b] == '\0')
{
return (haystack + a);
}
a++;
}
return ('\0');
}
