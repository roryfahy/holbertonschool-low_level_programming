#include "holberton.h"
/**
 * print_rev - prints a string in reverse followed by a newline
 * @s: pointer to char
 *
 * Return: void
 */
void print_rev(char *s)
{
	int n = 0;

	while (*s)
	{
		s++;
		n++;
	}
	s--;
	for (; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
