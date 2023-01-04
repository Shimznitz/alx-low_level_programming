#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints char
 * @s: character
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
	else
		_putchar('\n');
}
