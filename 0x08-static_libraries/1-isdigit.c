/**
 * _isdigit - checks for digit char
 * @c: stores char value
 *
 * Return: 1 if c == digit; 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
