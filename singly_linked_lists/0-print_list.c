#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - Affiche touts les éléments d'une liste chaînée
 * @h: Pointeur vers le premier nœud de la liste
 *
 * Description: Parcourt la liste `list_t` et affiche chaque nœud.
 * Si `str` est NULL, affiche "[0] (nil)".
 *
 * Return: Le nombre total de nœuds.
 */
size_t print_list(const list_t *h)
{
size_t compteur = 0;
    if (h == NULL)
{
printf("[0] (nil) \n");
return (0);
}
    while(h != NULL)
{
    if (h->str == NULL)
printf("[0] (nil)\n");
    else
printf("[%u] %s\n", h->len, h->str);
    h = h->next;
    ++compteur;
}
return (compteur);
}