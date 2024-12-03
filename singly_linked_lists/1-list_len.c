#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - Retourne le nombre d'éléments dans une liste chaînée de type list_t
 * @h: Pointeur vers le premier élément de la liste chaînée
 *
 * Description: Cette fonction parcourt une liste chaînée de type `list_t`
 * et compte le nombre de nœuds présents dans la liste.
 *
 * Return: Le nombre total de nœuds dans la liste chaînée.
 */
size_t list_len(const list_t *h)
{
size_t compteur = 0;
	while(h != NULL)
	{
		++compteur;
		h = h->next;
	}
	return compteur;
}