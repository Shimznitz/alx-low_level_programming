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
	while (n <= 98)
	{
		if (n == 98)
		{
			printf("%d\n", n);
		}
		else
		{
		printf("%d, \n",n);
		}
		n++;
	}
}
