#include "holberton.h"
/**
 * puts_half - prints half the string followed by new line
 * @str: pointer to char
 *
 * Return: void
 */
void puts_half(char *str)
{
	char *cptr = str;
	int k = 0; /*length of string*/
	int n;

	while (*cptr)
	{
		cptr++;
		k++;
	}
	n = k / 2;
	cptr -= n;
	while (*cptr)
	{
		_putchar(*cptr);
		cptr++;
	}
	_putchar('\n');
}
