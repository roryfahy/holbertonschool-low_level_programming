#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string
 * @str: pointer to char
 *
 * Return: void
 */
void puts2(char *str)
{
	while (*str)
	{
		int fuckaduck;

		fuckaduck++;
		if (fuckaduck % 2 == 1)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
