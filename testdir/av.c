#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(__attribute__((unused))int ac, char **av)
{
	for (; *av; av++)
		printf("%s\n", *av);
	return (0);
}
