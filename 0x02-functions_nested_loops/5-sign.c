#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_sign - returns certain values
 * Return: a range of return values
 */
int print_sign(int n)
{
	char positive_sign = '+';
	char negative_sign = '-';
	char zero_sign = '0';

	if (n > 0)
	{
		return (1);
		putchar(positive_sign);
	}
	else if (n < 0)
	{
		return (-1);
		putchar(negative_sign);
	}
	else
	{
		return (0);
		putchar(zero_sign);
	}
	putchar('\n');
}
