# More Malloc, Free

Ce projet permet d'apprendre à gérer la mémoire dynamique en C, en utilisant les fonctions `malloc`, `free`, et `exit`. Vous apprendrez à allouer de la mémoire, à concaténer des chaînes de caractères, à allouer de la mémoire pour un tableau, à initialiser cette mémoire et à gérer les erreurs de manière efficace.

## Objectifs d'apprentissage

À la fin de ce projet, vous devez être capable d'expliquer :

- Comment utiliser la fonction `exit`.
- Ce que sont les fonctions `calloc` et `realloc` de la bibliothèque standard et comment les utiliser.

## Prérequis

- Avoir une bonne maîtrise des fonctions de gestion de mémoire en C : `malloc`, `free`, `exit`, et comprendre le fonctionnement de la gestion dynamique de la mémoire.
- Comprendre le concept de gestion d'erreurs en utilisant la fonction `exit`.

## Fonctionnalités

### 0. `malloc_checked`
- Prototype : `void *malloc_checked(unsigned int b);`
- Cette fonction alloue de la mémoire et retourne un pointeur vers l'espace mémoire alloué. Si `malloc` échoue, le programme doit se terminer avec le statut 98.

### 1. `string_nconcat`
- Prototype : `char *string_nconcat(char *s1, char *s2, unsigned int n);`
- Cette fonction concatène les deux chaînes de caractères `s1` et `s2` et retourne un pointeur vers l'espace mémoire alloué contenant la concaténation de `s1` et des `n` premiers caractères de `s2`. Si `n` est plus grand que la longueur de `s2`, toute la chaîne `s2` est utilisée.

### 2. `_calloc`
- Prototype : `void *_calloc(unsigned int nmemb, unsigned int size);`
- Cette fonction alloue de la mémoire pour un tableau de `nmemb` éléments de `size` octets chacun, puis initialise cette mémoire à zéro. Si `nmemb` ou `size` est égal à 0, la fonction retourne `NULL`.

### 3. `array_range`
- Prototype : `int *array_range(int min, int max);`
- Cette fonction crée un tableau d'entiers contenant toutes les valeurs de `min` à `max` (inclus). Si `min` est supérieur à `max`, la fonction retourne `NULL`.

## Compilation

Tous les fichiers doivent être compilés avec les options suivantes :

