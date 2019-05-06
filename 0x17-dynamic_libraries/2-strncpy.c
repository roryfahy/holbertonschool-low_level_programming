#include "holberton.h"

/**
 * *_strncpy - copies a string and returns a pointer to a char
 * @dest: points to address char string
 * @src: points to address char string
 * @n: int
 *
 * Return: pointer to char string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
