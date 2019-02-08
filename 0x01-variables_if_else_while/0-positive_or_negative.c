/*
 * program assigns random num to var n each time its executed then prints
 * if it is positive or negeative
*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - creates a random int and prints whether it is positive or negative
 *
 * Return: returns zero if function is run without error
 */

int main(void)
{
int n;

srand(time((0)));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
else
	printf("%d is negative\n", n);
return (0);
}
