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
	unsigned int i;
	char *chararray;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		chararray = va_arg(p, char *);

		if (chararray)
		{
		printf("%s", chararray);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
