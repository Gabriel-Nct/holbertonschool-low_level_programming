#include "lists.h"

/**
 * insert_dnodeint_at_index - insère un noeud à une position donnée.
 * @h: pointeur de la tête de la double liste.
 * @compteur: traverse la liste.
 * @n: données du noeud.
 * @actuel: là où le noeud est.
 * Return: l'adresse du nouveau noeud, or NULL si cela a échoué.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *nvnoeud;
dlistint_t *actuel = *h;
unsigned int compteur = 0;
if (idx == 0)
return (add_dnodeint(h, n));
while (actuel != NULL && compteur < idx - 1)
{
actuel = actuel->next;
compteur++;
}
if (actuel == NULL)
return (NULL);
nvnoeud = malloc(sizeof(dlistint_t));
if (nvnoeud == NULL)
return (NULL);
nvnoeud->n = n;
nvnoeud->next = actuel->next;
nvnoeud->prev = actuel;
if (actuel->next != NULL)
actuel->next->prev = nvnoeud;
actuel->next = nvnoeud;
return (nvnoeud);
}
