#include "lists.h"
/**
 * sum_dlistint - renvoie la somme de toutes les données dans dlistint_t.
 * @head: pointer sur la tête de la liste
 * Return: la somme de toutes les données, ou 0 si la liste est vide.
 */
int sum_dlistint(dlistint_t *head)
{
int somme = 0;
while (head != NULL)
{
somme += head->n;
head = head->next;
}
return (somme);
}
