#include <stdio.h>
/**
 * main - print 0 through 9 with ' and space
 *
 * Return: 0 if success
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
