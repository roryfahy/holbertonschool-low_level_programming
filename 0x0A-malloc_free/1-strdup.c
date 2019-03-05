#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory which
 * contains a copy of the string given as a parameter
 * @str: pointer to a char string
 *
 * Return:a pointer to allocated space in mem
 */
char *_strdup(char *str)
{
	char *arr, *cpy;
	int count = 0;
	int i = 0;

	cpy = str;
	for (; *cpy; cpy++, count++)
		;
	arr = malloc(sizeof(*str) * count);
	if (arr == NULL)
		return (arr);
	for (; i < count; i++)
		arr[i] = str[i];
	return (arr);
}
