#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to a string
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
/**
 * zeta - returns palindromic nature of string s
 * @s: pointer to a string
 * @A: starting point for test
 * @B: end index to be tested
 *
 * Return: 1 or 0
 */
int zeta(char *s, int A, int B)
{
	if (A >= B)
		return (1);
	if (s[A] == s[B])
		return (zeta(s, A + 1, B - 1));
	return (0);
}
/**
 * is_palindrome - determines palindromic nature of string
 * @s: pointer to a string
 *
 * Return: 1 for palindrome 0 for not palindrome
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (zeta(s, 0, length - 1));
}
