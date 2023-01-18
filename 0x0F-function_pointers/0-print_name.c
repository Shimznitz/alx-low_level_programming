#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: pointer to name.
 * @f: function.
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
}
