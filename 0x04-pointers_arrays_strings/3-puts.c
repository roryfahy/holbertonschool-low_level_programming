#include "holberton.h"
/**
 * _puts - prints a string followed by a newline
 * @str: pointer to char
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
