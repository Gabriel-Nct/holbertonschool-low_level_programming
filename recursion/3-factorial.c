#include "main.h"
/**
  * factorial - calcule le facteur
  * @n: le nombre a calculer pour factoriser
  *
  * Return: renvoie la valeur entière
  */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
