#include <stdio.h>
/**
 * main - imprime le nombre d'argument
 * @argc: nombre d'arguments dans le programme
 * @argv: un array de pointer
 *
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
