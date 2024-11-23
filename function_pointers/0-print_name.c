#include <stdio.h>
#include <stdlib.h>
/*
 * La fonction pritn_name qui prend une chaîne de caractère name et applique une opération spécifiée
 * via un pointeur de fonction *f qui va faire appelle 
 * à une fonction qui prend en sortie void et en entrée une chaîne de caractère
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
        return;
    else (*f)(name);
}
