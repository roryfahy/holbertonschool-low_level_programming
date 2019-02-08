#include <stdio.h>
/**
 * main - should print 0 to 9 and a through f
 *
 * Return: 0 if success
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
