#include "shell.h"

/**
 * _strcpy - copy from src into dest
 * @dest: sting to copy into
 * @str: string to copy
 *
 * Return: pointer to destination string
 */
char *_strcpy(char *dest, const char *src)
{
	char *dest_cpy = dest;

	if (!dest || !src)
		return (NULL);
	for (; *src; src++, dest_cpy++)
		*dest_cpy = *src;
	*dest_cpy = '\0';
	return (dest);
}
