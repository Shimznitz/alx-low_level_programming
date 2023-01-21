#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - sums parameters
 * @n: last declared parameter
 * @separator: string char
 * Return: returns an integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	int x;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(p, int);
		printf("%d", x);
		if (separator && i != (n - 1))
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
