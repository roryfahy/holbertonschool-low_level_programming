/**
 * free_dog - lets the dogs out
 * @d: pointer to a dog_t type
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);
}
