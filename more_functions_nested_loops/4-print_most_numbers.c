#include "main.h"
/**
 * print_most_numbers - imprime les chiffres de 0 à 9 sauf 2 et 4
 */
void print_most_numbers(void)
{
char c; /* Déclaration de c comme un caractère */
c = '0'; /* Initialisation de c à '0' */
while (c <= '9') /* Boucle tant que c est inférieur ou égal à '9' */
{
if (c != '2' && c != '4') /* Vérifie si c n'est pas '2' ou '4' */
{
_putchar(c); /* Imprime c */
}
c++; /* Incrémente c pour passer au chiffre suivant */
}
_putchar('\n'); /* Imprime une nouvelle ligne à la fin */
}
