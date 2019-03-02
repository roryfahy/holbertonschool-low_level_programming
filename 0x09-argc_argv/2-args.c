#include <stdio.h>
#include "holberton.h"
/**
 * main - prints all args it receives
 * @argc: int
 * @argv: pointer to array of strings
 *
 * Return: zero if success
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
