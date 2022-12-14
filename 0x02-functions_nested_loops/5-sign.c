#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_sign - returns certain values
 * Return: a range of return values
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar("+");
		return (1);
	}
	else if (n < 0)
	{
		putchar("-");
		return (-1);
	}
	else
	{
		putchar("0");
		return (0);
	}
}
