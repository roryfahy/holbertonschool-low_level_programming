#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @dest: points to address char string
 * @src: points to address char string
 *
 * Return: pointer to char string dest
 */
char *_strcat(char *dest, char *src)
{
	char *cptr = dest;

	while (*cptr)
	{
		cptr++;
	}
	while (*src)
	{
		*cptr = *src;
		cptr++;
		src++;
	}
	return (dest);
}
