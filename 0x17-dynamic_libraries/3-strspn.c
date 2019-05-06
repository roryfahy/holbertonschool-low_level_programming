#include "holberton.h"
#define NULL ((void *)0)
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to first mem address in string s
 * @accept: pointer to start of prefix substring
 *
 * Return: number of bytes in the initial segment of s that consists only of
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	char *rep;

	for (; *s; s++)
	{
		for (rep = accept; *rep; rep++)
			if (*s == *rep)
			{
				i++;
				break;
			}
		if (*s != *rep)
			return (i);
	}
	return (i);
}
