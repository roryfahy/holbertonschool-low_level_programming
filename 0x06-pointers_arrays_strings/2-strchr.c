#include "holberton.h"
#define NULL ((void *)0)
/**
 * _strchr - locates a char in a string
 * @s: pointer to first mem address in string s
 * @c: character to be located
 *
 * Return: pointer to first occurance of char c
 */
char *_strchr(char *s, char c)
{
	char *rep = s;

	for (; *rep; rep++)
		if (*rep == c)
			return (rep);
	return (NULL);
}
