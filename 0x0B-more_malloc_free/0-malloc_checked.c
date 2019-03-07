#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates mem using malloc
 * @b: number of bytes to assign
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(sizeof(unsigned int) * b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
