#include "sort.h"

/**
 * radix_sort -
 *
 * Return: 
 */
void radix_sort(int *array, size_t size)
{
	unsigned char digit;
	size_t *buckets, *counts, index, total;
	int pow10 = 1;

	if (array == NULL || size < 2)
		return;
	counts = malloc(size * sizeof(size_t) + size * 10 * sizeof(size_t));
	if (counts == NULL)
		return;
	buckets = counts + size;
	do {
		total = 0;
		for (digit = 0; digit < 10; digit++)
			counts[digit] = 0;
		for (digit = 0; digit < 10; digit++)
		{
			for (index = 0; index < size; index++)
			{
				if (array[index] / pow10 % 10 == digit)
				{
					buckets[size * digit + counts[digit]++] = array[index];
					total += digit == 0 ? 0 : 1;
				}
			}
		}
		if (total == 0)
			continue;
		for (digit = total = 0; digit < 10; digit++)
		{
			for (index = 0; index < counts[digit]; index++, total++)
				array[total] = buckets[size * digit + index];
		}
		pow10 *= 10;
		print_array(array, size);
	} while (total != 0 && pow10 <= 1000000000);
	free(counts);
}
