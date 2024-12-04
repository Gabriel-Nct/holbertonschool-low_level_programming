#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - Libère tous les nœuds d'une liste list_t
 * @head: Pointeur vers le premier nœud de la liste
 */
void free_list(list_t *head)
{
list_t *temporaire;
while (head != NULL)
{
    temporaire = head->next;
    free(head->str);
    free(head);
    head = temporaire;
}
}