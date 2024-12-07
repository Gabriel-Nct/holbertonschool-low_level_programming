#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint_end - Ajoute un nouveau noeud à la fin de la liste
 * @head: Le pointeur du dernier noeud de la liste
 * @n: L'entier à dupliquer dans le nouveau noeud
 * Return: La nouvelle liste, ou NULL si cela échoue.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *findeliste;
dlistint_t *temporaire;
findeliste = malloc(sizeof(dlistint_t));
if (findeliste == NULL)
return (NULL);
findeliste->n = n;
findeliste->next = NULL;
if (*head == NULL)
{
findeliste->prev = NULL;
*head = findeliste;
return (findeliste);
}
temporaire = *head;
while (temporaire->next != NULL)
{
temporaire = temporaire->next;
}
temporaire->next = findeliste;
findeliste->prev = temporaire;
return (findeliste);
}
