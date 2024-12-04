#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - Ajoute un nouveau noeud au début de la liste
 * @head: Le pointer du premier noeud de la liste
 * @str: La chaîne de caractère à dupliquer dans le nouveau noeud
 *
 * Return: La nouvelle liste, ou NULL si cela échoue.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *debutliste;

    debutliste = malloc(sizeof(list_t));
if (debutliste == NULL)
    return (NULL);
debutliste->str = malloc(strlen(str) + 1);
if (debutliste->str == NULL)
{
    free(debutliste);
    return (NULL);
}
strcpy(debutliste->str, str); 
debutliste->next = *head;
debutliste->len = strlen(str);
*head = debutliste;
return (debutliste);
}