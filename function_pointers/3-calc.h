#ifndef _CALC_H_
#define _CALC_H_

/**
 * struct op - Structure qui associe un opérateur à sa fonction correspondante.
 * @op: Chaîne de caractères représentant l'opérateur (par exemple "+", "-", etc.).
 * @f: Pointeur vers la fonction qui réalise l'opération sur deux entiers.
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
}
op_t;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif /* _CALC_H_ */
