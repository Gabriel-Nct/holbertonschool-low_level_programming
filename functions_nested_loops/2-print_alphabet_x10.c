#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
char ch;
int i;
for (i = 0; i < 10; i++) /* Répète 10 fois */
{
for (ch = 'a'; ch <= 'z'; ch++) /* Imprime chaque lettre de a à z */
{
_putchar(ch);
}
_putchar('\n'); /* Affiche un saut de ligne après chaque alphabet */
}
}
