#include "holberton.h"
/**
 * _puts_recursion - prints a string followed by newline
 * @s: pointer to a string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	char *s1 = s;

	if (*s1 == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s1 + 1);
}
