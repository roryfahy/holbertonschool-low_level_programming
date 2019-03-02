#include "holberton.h"

/**
 * *_strncat - concatenates two strings
 * @dest: points to address char string
 * @src: points to address char string
 * @n: int
 *
 * Return: pointer to char string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *cptr = dest;

	while (*cptr)
	{
		cptr++;
	}
	while (n > 0)
	{
		*cptr = *src;
		cptr++;
		src++;
		n--;
	}
	return (dest);
}
