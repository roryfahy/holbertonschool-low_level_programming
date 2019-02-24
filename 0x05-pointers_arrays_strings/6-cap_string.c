#include "holberton.h"
/**
 * *cap_string - capitalized the words of a str
 * @zard: points to a char str
 *
 * Return: ponter to s
 */
char *cap_string(char *zard)
{
	char *pika = zard;
	char n[] = " \n\t,;.!?\"(){}";
	char *sep;

	if (*pika >= 'a' && *pika <= 'z')
		*pika = (*pika) - 32;
	for (; *pika; pika++)
	{
		for (sep = n; *sep; sep++)
			if (*pika == *sep && *(pika + 1) <= 'z' && *(pika + 1) >= 'a')
			{
				*(pika + 1) = (*pika + 1) - 32;
				break;
			}
	}
	return (zard);
}
