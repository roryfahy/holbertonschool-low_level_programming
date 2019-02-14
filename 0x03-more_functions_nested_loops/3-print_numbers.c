#include "holberton.h"
/**
 * print_numbers - prints sting of digits 0 to 9 followed by new line
 *
 * return: void
 */
void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		_putchar(x);
	_putchar('\n');
}
