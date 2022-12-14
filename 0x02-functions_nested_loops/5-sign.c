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
		putchar(positive_sign);
		return (1);
	}
	else if (n < 0)
	{
		putchar(negative_sign);
		return (-1);
	}
	else
	{
		putchar(zero_sign);
		return (0);
	}
}
