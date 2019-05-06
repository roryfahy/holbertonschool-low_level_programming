#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: points to a memory area to copy to
 * @src: points to memory area to copy
 * @n: number of bytes of mem area to copy
 *
 * Return: pointer to memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *rep = dest;

	for (; n > 0; n--)
	{
		*rep = *src;
		rep++;
		src++;
	}
	return (dest);
}
