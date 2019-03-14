#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - add two ints
 * @a: int
 * @b: int
 *
 * Return: sum of ints
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub two ints
 * @a: int
 * @b: int
 *
 * Return: difference of ints
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two ints
 * @a: int
 * @b: int
 *
 * Return: product of ints
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two ints
 * @a: int
 * @b: int
 *
 * Return: division of ints
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
 * op_mod - modulo two ints
 * @a: int
 * @b: int
 *
 * Return: modulo of ints
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
