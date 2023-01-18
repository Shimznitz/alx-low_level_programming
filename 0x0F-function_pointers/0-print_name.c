#include <stdio.h>
/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	*f = &name;
}
