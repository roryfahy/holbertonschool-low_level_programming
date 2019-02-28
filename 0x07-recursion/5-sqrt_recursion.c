#include "holberton.h"
/**
 * testies - returns sqrt of int
 * @n: int to be sqrted
 * @x: val of sqrt gf
 *
 * Return: sqrt val
 */
int testies(int x, int n)
{
	if (x * x < n)
	{
		return (testies(x + 1, n));
	}
	else if (x * x == n)
		return (x);
	else
		return (-1);
}
/**
 * _sqrt_recursion - returns sqrt of int
 * @n: int to be sqrted
 *
 * Return: sqrt val
 */
int _sqrt_recursion(int n)
{
	return (testies(0, n));
}
