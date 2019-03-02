#include "holberton.h"
/**
 * puts_half - prints half the string followed by new line
 * @str: pointer to char
 *
 * Return: void
 */
void puts_half(char *str)
{
	int k = 0; /*length of string*/
	int n;

	while (*str)
	{
		str++;
		k++;
	}
	n = k / 2;
	str -= n;
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
