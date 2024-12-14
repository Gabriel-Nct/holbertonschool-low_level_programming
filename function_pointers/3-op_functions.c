#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* op_add - addition two integers
* @a: first integer
* @b: second integer
* Return: one integer
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - substract two integers
* @a: first integer
* @b: second integer
* Return: one integer
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - multiplicates two integers
* @a: first integer
* @b: second integer
* Return: one integer
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - divides integer a by integer b
* @a: first integer
* @b: second integer
* Return: one integer
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
* op_mod - gives the modulo of integer a by b
* @a: first integer
* @b: second integer
* Return: the modulo
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
