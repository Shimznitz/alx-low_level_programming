#include "main.h"
/**
 * reverse_array - reverses the array
 * @a: an array of integers
 * @n: number of elements to swap
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, x;

	i = 0;
	j = n - 1;

	while(i < j)
	{
		x = a[i];
		a[i] = a[j];
		a[j] = x;

		i++;
		j--;
	}
}
