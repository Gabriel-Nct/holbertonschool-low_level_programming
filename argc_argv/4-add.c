#include <stdio.h>
#include <stdlib.h>
/**
 * main - Affiche la somme des nombres positifs,
 *        suivie d'une nouvelle ligne.
 * @argc: Le nombre d'arguments passés au programme.
 * @argv: Un tableau de pointeurs vers les arguments.
 *
 * Return: Si l'un des nombres contient des symboles non numériques - 1.
 *         Sinon - 0.
 */
int main(int argc, char *argv[])
{
int num, digit, sum = 0;
for (num = 1; num < argc; num++)
{
for (digit = 0; argv[num][digit]; digit++)
{
if (argv[num][digit] < '0' || argv[num][digit] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[num]);
}
printf("%d\n", sum);
return (0);
}
