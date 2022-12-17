#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_sign - returns certain values
 * Return: a range of return values
 * @n: input integer
 */
int print_sign(int n)
{
	/*char i = '1';*/
	/*char z = '0';*/
	char positive_sign = '+';
	char negative_sign = '-';
	char zero_sign = '0';

	if (n > 0)
	{
		_putchar(positive_sign);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(negative_sign);
		return (-1);
	}
	else
	{
		_putchar(zero_sign);
		return(0);
	}
	/*putchar('\n');*/
}
