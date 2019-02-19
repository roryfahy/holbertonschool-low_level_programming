#include "holberton.h"
/**
 * _strlen - returns length of a string
 * @s: pointer to char
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	char n = 0;

	while (*s)
	{
		n++;
		s++;
	}
	return (n);
}
