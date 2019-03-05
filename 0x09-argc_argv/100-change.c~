#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - sums args in array
 * @argc: integer num of args
 * @argv: array of pointers to arguments
 *
 * Return: zero if correct
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *rep;

	while (--argc > 0)
	{
		rep = argv[argc];
		while (*rep)
		{
			if (!isdigit(*rep))
			{
				printf("Error\n");
				return (1);
			}
			rep++;
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);

	return (0);
}
