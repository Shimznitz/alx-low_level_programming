#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - finds the squarerooot
 * @n: number to be rooted
 * Return: returns an integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
	return ((_sqrt_recursion(n) + (n / _sqrt_recursion(n))/2);
	}
}
