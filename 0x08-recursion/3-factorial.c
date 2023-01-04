#include <stdio.h>
#include "main.h"
/**
 * factorial - ad a number to itself
 * @n: the numbe rto be factorialed
 * Return: the factorial
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
