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
	int change, total = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	while (change >= 25)
	{
		change -= 25;
		total++;
	}
	while (change >= 10)
	{
		change -= 10;
		total++;
	}
	while (change >= 5)
	{
		change -= 5;
		total++;
	}
	while (change >= 2)
	{
		change -= 2;
		total++;
	}
	while (change >= 1)
	{
		change -= 1;
		total++;
	}
	printf("%d\n", total);
	return (0);
}
