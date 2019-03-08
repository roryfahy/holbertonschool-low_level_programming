#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * _calloc - allocate mem for arr using malloc
 * @nmemb: num of mem boxes
 * @size: size of unit mem boxes
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr, *rep;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	rep = ptr;
	while (i < nmemb * size)
	{
		*rep = 0;
		rep++;
		i++;
	}
	return (ptr);
}
