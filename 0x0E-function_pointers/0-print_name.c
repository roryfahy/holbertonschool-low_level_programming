/**
 * print-name - print a name
 * @name - pointer to name
 * @f - pointer to a function that takes a pointer to a char and
 * returns nothing
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
