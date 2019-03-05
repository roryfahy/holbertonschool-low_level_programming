#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * create_array - create array of chars and initialze it with a specific char
 * @size: size of array to print?
 * @c: char to initialize array to
 *
 * Return: a pointer to the first address of the char array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (arr);
	for (; i < size; i++)
		arr[i] = c;
	return (arr);
}
