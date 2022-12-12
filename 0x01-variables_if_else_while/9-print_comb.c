#include <stdio.h>
/**
 * main - prints combinations of 2 gitis
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
