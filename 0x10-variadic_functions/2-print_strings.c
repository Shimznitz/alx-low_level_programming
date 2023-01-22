#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - check the code
 * @separator: char
 * @n: integer n.
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	int i;
	va_start(p, n);
	char *chararray;

	chararray = va_arg(p, char *);

	for (i = 0; i < n; i++)
	{
		printf("%s", chararray);
		if (separator && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
