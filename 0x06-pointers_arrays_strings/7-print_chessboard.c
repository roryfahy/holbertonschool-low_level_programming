#include "holberton.h"
#define NULL ((void *)0)
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to a char
 *
 * Return: void
  */
void print_chessboard(char (*a)[8])
{
	int y = 0;
	int x = 0;

	for (; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
			_putchar((*(a + y))[x]);
		_putchar('\n');
	}
}
