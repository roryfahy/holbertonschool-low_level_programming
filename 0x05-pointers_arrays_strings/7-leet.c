#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @str- points to a string
 *
 * Return: address of argument string
 */
char *leet(char *str)
{
	char *rep = str;
	char l[] = "aeotl";
	char u[] = "AEOTL";
	char *low = l;
	char *up = u;
	char lee[] = "43071";
	char *leet = lee;

	for (; *rep; rep++)
		for (leet = lee, up = u, low = l; *up; up++, low++, leet++)
			if (*rep == *low || *rep == *up)
			{
				*rep = *leet;
				break;
			}
	return (str);
}
