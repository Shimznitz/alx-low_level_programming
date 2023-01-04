#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - prints 1 is not pime and 0 else
 * @n: integer
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
