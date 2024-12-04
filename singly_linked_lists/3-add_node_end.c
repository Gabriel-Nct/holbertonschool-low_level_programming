#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Ajoute un nouveau noeud à la fin de la liste
 * @head: Le pointeur du dernier noeud de la liste
 * @str: La chaîne de caractères à dupliquer dans le nouveau noeud
 *
 * Return: La nouvelle liste, ou NULL si cela échoue.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *findeliste;
list_t *temporaire;
int longueur = 0;
findeliste = malloc(sizeof(list_t));
if (findeliste == NULL)
    return (NULL);
findeliste->str = strdup(str);
if (findeliste->str == NULL)
{
    free(findeliste);
    return (NULL);
}
while (str[longueur] != '\0')
{
    longueur++;
}
findeliste->len = longueur;
findeliste->next = NULL;
if (*head == NULL)
{
    *head = findeliste;
    return (findeliste);
}
temporaire = *head;
while (temporaire->next != NULL)
{
    temporaire = temporaire->next;
}
temporaire->next = findeliste;
return (findeliste);
}
