#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: points to address char string
 * @s2: points to address char string
 *
 * Return: pointer to char string dest
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			x = *s1 - *s2;
			break;
		}
		s1++;
		s2++;
	}
	return (x);
}
