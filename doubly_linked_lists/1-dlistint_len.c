#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - Counts the number of elements in a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t compteur = 0;
while(h != NULL)
{
	compteur++;
	h = h->next;
}
return compteur;
}