#include <stdio.h>
/**
 * main - print 0 through 9 with ' and space
 *
 * Return: 0 if success
 */
int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);

g			if (y != '9' || x != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
