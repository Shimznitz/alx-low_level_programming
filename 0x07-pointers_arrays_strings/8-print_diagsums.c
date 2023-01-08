#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints sums
 * @a: pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i = 0, firstsum = 0, secondsum = 0;

	for (; i < size; i++)
	{
		firstsum += *(a + (size * i + i));
		secondsum += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", firstsum);
	printf("%d\n", secondsum);
}
