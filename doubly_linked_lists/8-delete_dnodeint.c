#include "lists.h"

/**
 * delete_dnodeint_at_index - supprime le noeud ou l'index est situé dans la double liste.
 * @head: pointeur de la tête de la double liste.
 * @index: l'index du noeud qui doit être supprimé
 * @compteur: traverse la liste
 * Return: 1 si le noeud a été supprimé, -1 si cela échoue.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *actuel = *head;
unsigned int compteur = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = actuel->next;
if (actuel->next != NULL)
actuel->next->prev = NULL;
free(actuel);
return (1);
}
while (actuel != NULL && compteur < index)
{
actuel = actuel->next;
compteur++;
}
if (actuel == NULL)
return (-1);
if (actuel->next != NULL)
actuel->next->prev = actuel->prev;
if (actuel->prev != NULL)
actuel->prev->next = actuel->next;
free(actuel);
return (1);
}
