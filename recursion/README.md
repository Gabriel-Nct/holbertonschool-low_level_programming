Projet de Fonctions Récursives en C
Introduction

Ce projet a pour but d'explorer et de mettre en œuvre des fonctions récursives en langage C. La récursivité est une technique puissante qui permet à une fonction de s'appeler elle-même. Elle est souvent utilisée pour résoudre des problèmes qui peuvent être décomposés en sous-problèmes similaires, comme le calcul de factorielles, de suites de Fibonacci, ou le parcours d'arborescences.
Objectifs

    Comprendre le concept de récursivité et comment l'utiliser dans un programme C.
    Implémenter différentes fonctions récursives pour résoudre des problèmes classiques.
    Appliquer les bonnes pratiques de codage en respectant les conventions du style Betty.
    Compiler le projet avec les options -Wall -Werror -Wextra -pedantic -std=gnu89 pour assurer une qualité de code optimale.

Contenu du Projet

Voici les principales fonctions récursives implémentées dans ce projet :

    Calcul de Factorielle
        Fonction : int factorial(int n);
        Calcule la factorielle d'un nombre entier positif n en utilisant la récursivité.

    Suite de Fibonacci
        Fonction : int fibonacci(int n);
        Retourne le n-ième terme de la suite de Fibonacci en utilisant une approche récursive.

    Calcul de Puissance
        Fonction : int power(int base, int exponent);
        Calcule la puissance d'un nombre (base^exponent) de manière récursive.

    Somme des Chiffres d'un Nombre
        Fonction : int sum_digits(int n);
        Calcule la somme des chiffres d'un entier n récursivement.

    Inversion de Chaîne de Caractères
        Fonction : void reverse_string(char *str);
        Inverse une chaîne de caractères en utilisant la récursivité.

Utilisation

Chaque fonction est testée avec un fichier de test main.c, qui permet de vérifier son bon fonctionnement. Pour compiler le projet, exécutez la commande suivante :

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c functions.c -o recursive_functions

Puis, lancez le programme compilé avec :

./recursive_functions

Exigences

    Environnement : Ubuntu 20.04 LTS
    Compilateur : GCC avec les options -Wall -Werror -Wextra -pedantic -std=gnu89
    Style de Codage : Respect du style et de la documentation Betty
    Bibliothèque Standard : Utilisation interdite de fonctions de la bibliothèque standard C comme printf ou malloc

Remarques

Le projet a été conçu pour renforcer la compréhension de la récursivité. Chaque fonction est accompagnée de commentaires en français en début de fichier pour faciliter la lecture et la compréhension.

