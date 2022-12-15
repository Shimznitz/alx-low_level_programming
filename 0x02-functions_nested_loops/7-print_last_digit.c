#include "main.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - prints len of nums
 * @n: manipulated
 * Return: Always 0
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		if (n > 10)
		{	int ans = n % 10;
			return (ans);
		}
		return (n);
	}
	else if(n < 0)
	{
		int abs_res = abs(n);
		if (abs_res > 0)
		{
			int ans = abs_res % 10;
			return (ans);
		}
	}
	else
		return (n);
	return (b);
}
