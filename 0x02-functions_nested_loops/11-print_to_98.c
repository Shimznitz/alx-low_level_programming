#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - prints from 1 to 98
 * @n: input number
 * Return: Always int
 */
void print_to_98(int n)
{
	int j = 0;

	if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d, ", j);
		}
		printf("\n");
	}
	else if (n <= 98)
	{
	for (j = n; j <= 98; j++)
	{
		printf("%d, ", j);
	}
	printf("\n");
	}
	else
	{
		printf("%d\n", j);
	}
}
