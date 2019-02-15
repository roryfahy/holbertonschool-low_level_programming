#include "holberton.h"
/**
 * print_triangle - makes # triangle of size size
 * @size: holds integer of size of square
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				if (j < (size - i))
					_putchar(' ');
				else
					_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
