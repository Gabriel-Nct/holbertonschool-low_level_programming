#include <unistd.h>
/* Fonction qui écrit un caractère sur la sortie standard */
int _putchar(char c)
{
return write(1, &c, 1);
}
