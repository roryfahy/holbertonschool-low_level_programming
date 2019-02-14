#include "holberton.h"
/**
 * more_numbers - prints string 1-14 x10
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, k;

	for (k = 0; k <= 9; k++)
	{
		for (i = '0'; i < '2'; i++)
			for (j = '0'; j <= '9'; j++)
			{
				if (i != '1' || j <= '4')
				{
					if (i == '1')
						_putchar(i);
					_putchar(j);
				}
			}
		_putchar('\n');
	}
}
