#include "holberton.h"
/**
 * testies - returns sqrt of int
 * @n: int to be tested for primacy
 * @x: test int
 *
 * Return: 1 if prime else 0
 */
int testies(int x, int n)
{
	if (x > (n / 2))
		return (1);
	else if (n % x != 0)
		return (testies(x + 1, n));
	else
		return (0);
}
/**
 * is_prime_number - returns sqrt of int
 * @n: int to be checked for primacy
 *
 * Return: 1 for prime else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (testies(2, n));
}
