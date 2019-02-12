#include "holberton.h"
/**
 * print_alphabet - prints a string of alphabet
 *
 * Return: string of letters a to z
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
