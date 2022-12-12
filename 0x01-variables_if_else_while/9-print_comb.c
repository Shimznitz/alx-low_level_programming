#include <stdio.h>
/**
 * main - prints combinations of 2 gitis
 * Return: Always 0
 */
int main(void)
{
	int comma_placer = 0;
	int number = 0;

	for (number = 0; number <= 9; ++number)
	{
		for (comma_placer = 0; comma_placer <= 9; ++comma_placer)
		{
			putchar(number);
			putchar(comma_placer);
			if (!(comma_placer == 9 && number == 8))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
