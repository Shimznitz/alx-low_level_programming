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
	int i = n;

	for (; i >= 0; i--)
	{
		for (int p = 0; p <= n; p++)
		{
			a[p] = a[i];
		}
	}
}
