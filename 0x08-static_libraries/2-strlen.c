#include "holberton.h"
/**
 * _strlen - returns length of a string
 * @s: pointer to char
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s)
	{
		s++;
		n++;
	}
	return (n);
}
