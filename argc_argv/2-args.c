#include <stdio.h>
/**
 * main - imprime tout les arguments qu'il recoit.
 * @argc: le nombre d'arguments supportés dans le programme.
 * @argv: un array de pointer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int arg;
for (arg = 0; arg < argc; arg++)
printf("%s\n", argv[arg]);
return (0);
}
