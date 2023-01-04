#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - raise to power
 * @x: number to be raised
 * @y: by the power
 * Return: an interger
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y-1));
}
