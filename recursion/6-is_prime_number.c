#include "main.h"
/**
 * check_prime - vérifie si un nombre est premier
 * @n: le nombre à vérifier
 * @i: le diviseur courant
 *
 * Return: 1 si n est premier, sinon 0
 */
int check_prime(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (check_prime(n, i + 1));
}
/**
 * is_prime_number - détermine si un nombre est un nombre premier
 * @n: le nombre à vérifier
 *
 * Return: 1 si n est premier, sinon 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2));
}
