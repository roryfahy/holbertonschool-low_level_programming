#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * str_concat - concatenates two strings
 * @s1: pointer to string string 1
 * @s2: pointer to string 2
 *
 * Return: pointer to a newly allocated space in memory which contains the
 */
char *str_concat(char *s1, char *s2)
{
	char *arr, *cpy1, *cpy2;
	int count1 = 0;
	int count2 = 0;
	int i = 0;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	cpy1 = s1;
	cpy2 = s2;
	for (; *cpy1; cpy1++, count1++)
		;
	for (; *cpy2; cpy2++, count2++)
		;
	count2++;
	arr = malloc(sizeof(*s1) * count1 + sizeof(*s2) * count2);
	if (arr == NULL)
		return (arr);
	for (; i < count1; i++)
		arr[i] = s1[i];
	for (j = 0; j < count2; i++, j++)
		arr[i] = s2[j];
	return (arr);
}
