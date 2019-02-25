#include "holberton.h"
#define NULL ((void *)0)
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to first mem address in string s
 * @accept: pointer to start of prefix substring
 *
 * Return: number of bytes in the initial segment of s that consists only of
 * bytes from accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *rep;

	for (; *s; s++)
	{
		for (rep = accept; *rep; rep++)
			if (*s == *rep)
				return (s);
	}
	return (NULL);
}
