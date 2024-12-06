#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - Affiche touts les éléments d'une liste chaînée double
 * @h: Pointeur vers le premier nœud de la liste
 * Description: Parcourt la liste `dlistint_t` et affiche chaque nœud.
 * Return: Le nombre total de nœuds.
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t compteur = 0;
if (h == NULL)
{
return (0);
}
while(h != NULL)
{
printf("%u\n", h->n);
h = h->next;
++compteur;
}
return (compteur);
}