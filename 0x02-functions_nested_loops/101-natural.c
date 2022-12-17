#include <stdio.h>
/**
 * main - prints the sum of multiples of 3 /5 below 1024
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a = 0;
	unsigned long int b = 0;
	unsigned long int c = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			a = a + i;
		}
		else if ((i % 5) == 0)
		{
			b = b + i;
		}
	}
	c = a + b;
	printf("%lu\n", c);
	return (0);

}
