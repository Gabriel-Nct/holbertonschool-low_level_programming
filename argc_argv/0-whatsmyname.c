#include <stdio.h>
/**
 * main - imprime le nom du programme suivie d'une nouvelle ligne.
 * @argc: le nombre d'argument supportés par le programme.
 * @argv: un array de pointer
 *
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
