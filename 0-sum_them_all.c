#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums parameters
 * @n: last declared parameter
 * Return: returns an integer
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum, i = 0;
	va_list = var;

	if (n == 0)
		return (0);

	va_start(var, n);

	for(; i < n; i++)
	{
		sum += va_arg(var, int);
	}
	va_end(var);

	return (sum);
}
