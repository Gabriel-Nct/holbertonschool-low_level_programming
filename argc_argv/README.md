Projet : Arguments en C (argc, argv)

Ce projet contient des exercices qui vous permettent de comprendre et de manipuler les arguments passés à un programme C via la ligne de commande, en utilisant argc et argv. Chaque tâche aborde un concept clé lié à la gestion des arguments et à l'interaction avec l'utilisateur en ligne de commande.
Objectifs d'apprentissage

À la fin de ce projet, vous devriez être capable de :

    Utiliser les arguments passés à un programme.
    Expliquer les deux prototypes de main et dans quel cas utiliser l'un ou l'autre.
    Utiliser __attribute__((unused)) ou (void) pour compiler des fonctions avec des variables ou paramètres non utilisés.

Prérequis

Avant de commencer, vous devez avoir une connaissance de base du langage C, en particulier des concepts suivants :

    Les arguments de la fonction main
    La gestion des erreurs en C
    L’utilisation des boucles et des conditions

Exigences

    Éditeurs autorisés : vi, vim, emacs
    Compilation : Les fichiers doivent être compilés sur Ubuntu 20.04 LTS avec gcc en utilisant les options suivantes :

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89

    Structure des fichiers : Tous les fichiers doivent se terminer par une nouvelle ligne.
    Style de codage : Le code doit respecter le style Betty (vérifié avec betty-style.pl et betty-doc.pl).
    Fichier README.md : Un fichier README.md est obligatoire à la racine du projet.
    Limites :
        Pas de variables globales.
        Pas plus de 5 fonctions par fichier.
        Tous les prototypes de vos fonctions, y compris _putchar, doivent être inclus dans un fichier d'en-tête nommé main.h.

Tâches
0. It ain't what they call you, it's what you answer to

Écrire un programme qui imprime son nom, suivi d'une nouvelle ligne.
1. Silence is argument carried out by other means

Écrire un programme qui affiche le nombre d'arguments passés à la fonction main.
2. The best argument against democracy is a five-minute conversation with the average voter

Écrire un programme qui affiche tous les arguments reçus, un par ligne.
3. Neither irony nor sarcasm is argument

Écrire un programme qui multiplie deux nombres. Si le programme ne reçoit pas exactement deux arguments, il doit afficher "Error" et retourner 1.
4. To infinity and beyond

Écrire un programme qui additionne des nombres positifs. Si aucun nombre n'est passé au programme, afficher 0. Si l'un des arguments n'est pas un chiffre, afficher "Error" et retourner 1.
Compilation

Pour compiler chaque fichier source, utilisez la commande suivante :

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <fichier>.c -o <nom_exécutable>

Remplacez <fichier>.c par le nom du fichier source et <nom_exécutable> par le nom que vous souhaitez donner à l'exécutable généré.
Exemple d'exécution

    Tâche 0 :

$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
$ ./mynameis
./mynameis

    Tâche 1 :

$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
$ ./nargs hello world
2

    Tâche 2 :

$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
$ ./args You can do anything, but not everything.
You
can
do
anything,
but
not
everything.

    Tâche 3 :

$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
$ ./mul 2 3
6
$ ./mul 2 -3
-6
$ ./mul
Error

    Tâche 4 :

$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
$ ./add 1 1
2
$ ./add 1 10 100 1000
1111
$ ./add 1 2 3 e 4 5
Error
$ ./add
0

Conclusion

Ce projet vous permettra de mieux comprendre le fonctionnement des arguments en C et d'approfondir votre maîtrise de la manipulation des chaînes et des nombres passés en ligne de commande.
