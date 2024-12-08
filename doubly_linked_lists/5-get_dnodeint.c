#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
* get_dnodeint_at_index - Returns the nth node of a doubly linked list
* @head: Pointer to the head of the doubly linked list
* @compteur: Index of the node, starting from 0
* @index: index à comparer avec le compteur
* Return: Pointer to the nth node, or NULL if the index does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int compteur = 0;
while (head)
{
if (compteur == index)
return (head);
head = head->next;
compteur++;
}
return (NULL);
}
