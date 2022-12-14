#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_sign - returns certain values
 * Return: a range of return values
 */
int print_sign(int n)
{
	char i = '1';
	char z = '0';
	char positive_sign = '+';
	char negative_sign = '-';
	char zero_sign = '0';

	if (n > 0)
	{
		return (1);
		putchar(positive_sign);
		putchar(i);
	}
	else if (n < 0)
	{
		return (-1);
		putchar(negative_sign);
		putchar(i);
	}
	else
	{
		return (0);
		putchar(zero_sign);
		putchar(z);
	}
	putchar('\n');
}
