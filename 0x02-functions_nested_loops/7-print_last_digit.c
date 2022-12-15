#include "main.h"
#include <math.h>
#include <stdlib.h>
/**
 * print_last_digit - prints len of nums
 * @n: manipulated
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int b = floor(log10(abs(n))) + 1;
	return (b);
}
