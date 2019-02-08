#include <stdio.h>
/**
 * main - reverse print lowercase alphabet
 *
 * Return: 0 if correct
 */
int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
