#include "calc.h"

/**
 * op_add - sum of 2 integers
 * @a: int 1
 * @b: int 2
 * Return: sum of 2 ints
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts ints
 * @a: int 1
 * @b: int 2
 * Return: subtracted int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: int 1
 * @b: int 2
 * Return: multiplied ints
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: int 1
 * @b: int 2
 * Return: divided ints
 *
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
 * op_mod - modulo
 * @a: int 1
 * @b: int 2
 * Return:  modulo of ints
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n)";
		exit(100);
	}
	return (a % b);
}
