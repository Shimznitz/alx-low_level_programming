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
	if (n > 98)
	{
		for (n >= 98, n--)
		{
			printf("%d, ", n);
		}
		printf('\n');
	}
	else if (n <= 98)
	{
	for (n <= 98; n++)
	{
		printf("%d, ", n);
	}
	prinf('\n');
	}
	else
	{
		printf("%d\n", n);
	}
}
