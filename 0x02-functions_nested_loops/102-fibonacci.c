#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	long int j = 1;
	long int k = 2;
	long int i;
	long int nn;

	for (i = 1; i <= 50; i++)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%d\n", j);
		}
		nn = j + k;
		j = k;
		k = nn;
	}

	return (0);
}
