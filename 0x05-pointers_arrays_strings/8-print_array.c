#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element
 * @a: input array
 * @n: input n
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
