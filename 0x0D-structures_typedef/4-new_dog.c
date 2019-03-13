#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - get length of input string
 * @str: pointer to input string
 *
 * Return: null if null otherwise lengh of str pull null byte
 */
int _strlen(char *str)
{
	int len = 0;

	for (; *str; str++, len++)
		;
	len += 1;
	return (len);
}
/**
 * _strcpy - copy a string into allocated memory
 * @str: pointer to input string
 *
 * Return: pointer to copy of string
 */
char *_strcpy(char *str)
{
	char *p, *cpy;
	int len = _strlen(str);

	p = malloc(len);
	if (p == NULL)
		return (NULL);
	cpy = p;
	for (; *str; str++, cpy++)
		*cpy = *str;
	*cpy = '\0';
	return (p);
}
/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to a dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogptr;
	char *s1, *s2;


	dogptr = malloc(sizeof(*dogptr));
	if (dogptr == NULL)
		return (NULL);

	s1 = _strcpy(name);
	if (s1 == NULL)
	{
		free(dogptr);
		return (NULL);
	}
	dogptr->name = s1;

	s2 = _strcpy(owner);
	if (s2 == NULL)
	{
		free(s1);
		free(dogptr);
		return (NULL);
	}
	dogptr->owner = s2;
	dogptr->age = age;
	return (dogptr);
}
