#include <stdio.h>
/**
 * main - prints digits, fizzes and buzzes to 100
 *
 * Return: 0 if success
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
		if (x % 15 == 0)
			printf("FizzBuzz ");
		else if (x % 5 == 0)
			if (x == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		else if (x % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", x);
	printf("\n");
	return (0);
}
