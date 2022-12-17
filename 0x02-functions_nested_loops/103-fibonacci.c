#include <stdio.h>
/**
 * main - find & prints the sum of even-valued terms
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int j, k, nn, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum += j;
		}
		nn = j + k;
		j = k;
		k = nn;
	}
	printf("%lu\n", sum);
	return (0);
}
