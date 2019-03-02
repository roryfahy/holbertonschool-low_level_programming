#include <stdio.h>
#include "holberton.h"
/**
 * main - prints num of args passed into it
 * @argc: int
 * @argv: pointer to array of strings
 *
 * Return: zero if success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
