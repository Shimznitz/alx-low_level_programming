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
	int abs_res = abs(n);
	int ans = abs_res % 10;

	if (n < 0)
	{
		ans = ans * -1;
	}

	return (ans);
}
