#include "holberton.h"
/**
 * factorial - return factorial of a given number
 * @n: int to be factorialed
 *
 * Return: factoria
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
