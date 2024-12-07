#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - Libère tous les nœuds d'une liste list_t
 * @head: Pointeur vers le premier nœud de la liste
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temporaire;
while (head != NULL)
{
temporaire = head->next;
free(head);
head = temporaire;
}
}
