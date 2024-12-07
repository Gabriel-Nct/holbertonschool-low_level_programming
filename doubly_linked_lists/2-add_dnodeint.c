#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint - Ajoute un nouveau noeud au début de la liste
 * @head: Le pointer du premier noeud de la liste
 * Return: La nouvelle liste, ou NULL si cela échoue.
 * @n: l'entier stocké dans le noeud à remplacer par l'entier en entrée.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *debutliste;
debutliste = malloc(sizeof(dlistint_t));
if (debutliste == NULL)
return (NULL);
debutliste->n = n;
debutliste->next = *head;
debutliste->prev = NULL;
if (*head != NULL)
(*head)->prev = debutliste;
*head = debutliste;
return (debutliste);
}
