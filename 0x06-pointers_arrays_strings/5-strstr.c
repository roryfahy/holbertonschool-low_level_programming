#include "holberton.h"
#define NULL ((void *)0)
/**
 * _strstr - locates a substring
 * @haystack: pointer to start of string to search in
 * @needle: pointer to start of string to search
 *
 * Return: pointer to beginning of the located substring or NULL if substring
 * not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *hoe = haystack;
	char *rep = needle;

	for (; *haystack; haystack++)
	{
		hoe = haystack;
		for (rep = needle; *rep && *hoe == *rep; rep++, hoe++)
			;
		if (*rep == 0)
			return (haystack);
	}
	return (NULL);
}
