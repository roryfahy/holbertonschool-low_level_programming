#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - lets the dogs out
 * @d: pointer to a dog_t type
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
