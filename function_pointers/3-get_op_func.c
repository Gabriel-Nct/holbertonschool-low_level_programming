#include <stddef.h>
#include <string.h>
#include "3-calc.h"
/**
* get_op_func - pointer on operations functions
* @s: string which contains the operator
* Return: one integer calculated by operators or NULL.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},

	};
	int i = 0;

while (ops[i].op != NULL)
{
if (strcmp(ops[i].op, s) == 0)
{
 return (ops[i].f);
}
i++;
}
return (NULL);
}