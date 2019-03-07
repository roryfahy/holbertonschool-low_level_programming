#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes in string 2 to concat
 *
 * Return: pointer to newly allocated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int s2Len = 0;
	int tot_len = 0;
	char *newStr, *repNS, *repS1, *repS2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	repS1 = s1;
	repS2 = s2;
	for (; *repS2; repS2++)
		s2Len++;
	for (; *repS1; repS1++)
		tot_len++;
	if (n > s2Len)
		tot_len += s2Len;
	else
		for (; i < n; i++)
			tot_len++;
	newStr = malloc(sizeof(char) * tot_len + 1);
	repNS = newStr;
	if (newStr == NULL)
		return (NULL);
	for (; *s1; s1++, repNS++)
		*repNS = *s1;
	if (n > s2Len)
		for (; *s2; s2++, repNS++)
			*repNS = *s2;
	else
		for (i = 0; i < n; i++, s2++, repNS++)
			*repNS = *s2;
	*repNS = '\0';
	return (newStr);
}
